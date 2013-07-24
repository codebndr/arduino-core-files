#include "Queue.h"

Queue::Queue()
{
    _itemsInQueue = 0;
    _queueStart = 0;
    _queueEnd = 0;
}

int Queue::scheduleFunction(queuedFunction func, const char * id, unsigned long initialRun, unsigned long recur)
{
	int rv = 0;

    if(strlen(id) > 7)
    {
        rv = -1;
    } else {

    	queueItem newItem;
    	newItem.fPtr = func;
    	memset(newItem.itemName, 0, 8);
    	memcpy(newItem.itemName, id, strlen(id));
    	newItem.recur = recur;
    	newItem.next = initialRun;

    	rv = _addToQueue(newItem);
    }

	return rv;
}

int Queue::scheduleRemoveFunction(const char * id)
{
	queueItem target;
    int rv = -1;
    for (int i = 0; i < _itemsInQueue; ++i)
    {
        if(_queueGetTop(target) == 0)
        {
            if(strcmp(target.itemName, id) == 0)
            {
                rv = 0;
            } else {
                _addToQueue(target);
            }
        } else {
            rv = -1;
            break;
        }
    }

    return rv;
}

int Queue::scheduleChangeFunction(const char * id, unsigned long nextRunTime, unsigned long newRecur)
{
	queueItem target;
    int rv = -1;
    for (int i = 0; i < _itemsInQueue; ++i)
    {
        if(_queueGetTop(target) == 0)
        {
            if(strcmp(target.itemName, id) == 0)
            {
                target.next = nextRunTime;
                target.recur = newRecur;
                rv = 0;
            }
            _addToQueue(target);
        } else {
            rv = -1;
            break;
        }
    }

    return rv;
}

int Queue::Run(unsigned long now)
{
	queueItem target;
    int rv = 0;
    if(_itemsInQueue == 0)
    {
        rv = -1;
    }
    for (int i = 0; i < _itemsInQueue; ++i)
    {
        if(_queueGetTop(target)==0)
        {
            if(target.next <= now)
            {
                int tRv;
                tRv = (target.fPtr)(now);
                if(tRv == 0)
                {
                    rv++;
                }
                if(target.recur != 0)
                {
                    target.next = now + target.recur;
                    _addToQueue(target);
                }
            } else {
                _addToQueue(target);
            }
        } else {
            rv = -1;
            break;
        }
    }

    return rv;
}

int Queue::_queueGetTop(queueItem &item)
{
	int rv = 0;
    //Remove the top item, stuff it into item
    if (_queueEnd != _queueStart) {
            queueItem tempQueueItem = _schedule[_queueStart];
            //This Algorithm also from Wikipedia.
            _queueStart = (_queueStart + 1) % QueueScheduleSize;
            item = tempQueueItem;
            _itemsInQueue--;
    } else {
    //if the buffer is empty, return an error code
        rv = -1;
    }

    return rv;  
}

int Queue::_addToQueue(queueItem item)
{
	//This is just a circular buffer, and this algorithm is stolen from wikipedia
	int rv = 0;
    if ((_queueEnd + 1) % QueueScheduleSize != _queueStart) {
        _schedule[_queueEnd] = item;
        _queueEnd = (_queueEnd + 1) % QueueScheduleSize;
        _itemsInQueue++;
    } else {
        //if buffer is full, error
        rv = -1;
    }
    return rv;
}