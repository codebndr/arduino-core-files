#include <Queue.h>

void setup() {
    pinMode(13, OUTPUT);
    Serial.begin(9600);
    Serial.println("Alive");

    Queue myQueue;
    myQueue.scheduleFunction(testFunction, "Test", 5000, 1000);

    while(1) {
        myQueue.Run(millis());
        delay(10);
    }
}

int testFunction(unsigned long now)
{
    Serial.print("Hello: ");
    Serial.println(now);
}

void loop() {
}