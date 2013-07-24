#ifndef QUEUE_H
#define QUEUE_H

#include "Arduino.h"

typedef int (*queuedFunction)(unsigned long);

#define QueueScheduleSize 11

struct queueItem {
	queuedFunction fPtr;
	unsigned long next;
	unsigned long recur;
	char itemName[8];
};

class Queue
{
private:
	unsigned int _queueStart;
	unsigned int _queueEnd;
	unsigned int _itemsInQueue;
	queueItem _schedule[QueueScheduleSize];

	int _queueGetTop(queueItem &item);
	int _addToQueue(queueItem item);

public:
	Queue();

	int scheduleFunction(queuedFunction func, const char * id, unsigned long initialRun, unsigned long recur);
	int scheduleRemoveFunction(const char * id);
	int scheduleChangeFunction(const char * id, unsigned long nextRunTime, unsigned long newRecur);

	int Run(unsigned long now);
	/* data */
};

#endif