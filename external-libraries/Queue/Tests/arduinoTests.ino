#include <Queue.h>

/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

void setup() {                
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(13, OUTPUT);     
  Serial.begin(9600);
  Serial.println("Alive");

  int testStatus = 0;
  testStatus |= test_addTooMany();
  testStatus |= test_removeNonExistent();
  testStatus |= test_tooManyCharacters();
  testStatus |= test_changeNonExistent();
  testStatus |= test_runEmpty();

  if(testStatus == 0)
  {
    Serial.println("All tests passed.");
  } else {
    Serial.println("Something Failed.");
  }
  
}

void loop() {
  delay(1000);
}

int testFunction(unsigned long now)
{
  Serial.print("Hello: ");
  Serial.print(now);
  Serial.println();
}

int test_addTooMany(void)
{
   Queue testQueue;
   int rv;
   int testStatus = 0;
   rv = testQueue.scheduleFunction(testFunction, "Test1", 5000, 1000);
   if(rv != 0)
   {
     Serial.println("test_addTooMany failed.");
     testStatus = -1;
   }
   rv = testQueue.scheduleFunction(testFunction, "Test2", 5000, 1000);
   if(rv != 0)
   {
     Serial.println("test_addTooMany failed.");
     testStatus = -1;
   }
   rv = testQueue.scheduleFunction(testFunction, "Test3", 5000, 1000);
   if(rv != 0)
   {
     Serial.println("test_addTooMany failed.");
     testStatus = -1;
   }
   rv = testQueue.scheduleFunction(testFunction, "Test4", 5000, 1000);
   if(rv != 0)
   {
     Serial.println("test_addTooMany failed.");
     testStatus = -1;
   }
   rv = testQueue.scheduleFunction(testFunction, "Test5", 5000, 1000);
   if(rv != 0)
   {
     Serial.println("test_addTooMany failed.");
     testStatus = -1;
   }
   rv = testQueue.scheduleFunction(testFunction, "Test6", 5000, 1000);
   if(rv != 0)
   {
     Serial.println("test_addTooMany failed.");
     testStatus = -1;
   }
   rv = testQueue.scheduleFunction(testFunction, "Test7", 5000, 1000);
   if(rv != 0)
   {
     Serial.println("test_addTooMany failed.");
     testStatus = -1;
   }
   rv = testQueue.scheduleFunction(testFunction, "Test8", 5000, 1000);
   if(rv != 0)
   {
     Serial.println("test_addTooMany failed.");
     testStatus = -1;
   }
   rv = testQueue.scheduleFunction(testFunction, "Test9", 5000, 1000);
   if(rv != 0)
   {
     Serial.println("test_addTooMany failed.");
     testStatus = -1;
   }
   rv = testQueue.scheduleFunction(testFunction, "Test10", 5000, 1000);
   if(rv != 0)
   {
     Serial.println("test_addTooMany failed.");
     testStatus = -1;
   }
   rv = testQueue.scheduleFunction(testFunction, "Test11", 5000, 1000);
   if(rv != -1)
   {
     Serial.println("test_addTooMany failed.");
     testStatus = -1;
   }

   return testStatus;
}

int test_removeNonExistent(void)
{
  Queue testQueue;
  int rv;
  int testStatus = 0;
  rv = testQueue.scheduleFunction(testFunction, "Test", 5000, 1000);
  if(rv != 0)
  {
    Serial.println("test_removeNonExistent failed.");
    testStatus = -1;
  }
  rv = testQueue.scheduleRemoveFunction("Fail");
  if(rv != -1)
  {
    Serial.println("test_removeNonExistent failed.");
    testStatus = -1;
  }
  return testStatus;
}

int test_tooManyCharacters(void)
{
  Queue testQueue;
  int rv;
  int testStatus = 0;
  rv = testQueue.scheduleFunction(testFunction, "ReallyLongName", 5000, 1000);
  if(rv != -1)
  {
    Serial.println("test_tooManyCharacters failed.");
    testStatus = -1;
  }
  return testStatus;
}

int test_changeNonExistent(void)
{
  Queue testQueue;
  int rv;
  int testStatus = 0;
  rv = testQueue.scheduleFunction(testFunction, "Test", 5000, 1000);
  if(rv != 0)
  {
    Serial.println("test_changeNonExistent failed.");
    testStatus = -1;
  }
  rv = testQueue.scheduleChangeFunction("Fail", 1000, 1000);
  if(rv != -1)
  {
    Serial.println("test_changeNonExistent failed.");
    testStatus = -1;
  }
  return testStatus;
}

int test_runEmpty(void)
{
  Queue myQueue;
  int rv = 0;
  int testStatus = 0;
  rv = myQueue.Run(10);
  if (rv != -1)
  {
    Serial.println("test_runEmpty failed.");
    testStatus = -1;
  }
  return testStatus;
}