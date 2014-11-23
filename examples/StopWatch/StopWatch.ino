
#include <StopWatch.h>

StopWatch stopWatch;

void setup(){
	Serial.begin(9600);
	stopWatch.init();
	stopWatch.start();
	stopWatch.split();//Allways call split before the first task
        Serial.println("First Task");
	stopWatch.split();
        int num = 2+4;
	stopWatch.split();
        Serial.print(String(num));
	stopWatch.split();
	stopWatch.split();
	stopWatch.split();
	stopWatch.split();
	stopWatch.split();
	stopWatch.split();
	
	Serial.println();
	Serial.println("Printing 'First Task' tok:");
	Serial.println(stopWatch.splitTimes[1]);
	Serial.println("int num = 2+4; tok:");
	Serial.println(stopWatch.splitTimes[2]);
	Serial.println("Printing num tok:");
	Serial.println(stopWatch.splitTimes[3]);
	Serial.println("No task:");
	Serial.println(stopWatch.splitTimes[4]);
	Serial.println(stopWatch.splitTimes[5]);
	Serial.println(stopWatch.splitTimes[6]);
	Serial.println(stopWatch.splitTimes[7]);
	Serial.println(stopWatch.splitTimes[8]);
	Serial.println(stopWatch.splitTimes[9]);
	Serial.println();
}

void loop(){
}