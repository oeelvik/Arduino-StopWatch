
#include <StopWatch.h>

StopWatch stopWatch;

void setup(){
	Serial.begin(9600);
	Serial.println(stopWatch.index);
	stopWatch.init();
	Serial.println(stopWatch.index);
	Serial.println(stopWatch.splitTimes[0]);
	Serial.println(stopWatch.splitTimes[1]);
	Serial.println(stopWatch.splitTimes[2]);
	Serial.println();

	Serial.println(stopWatch.overhead);
	stopWatch.start();
	stopWatch.split();
	stopWatch.split();
	Serial.println(stopWatch.splitTimes[0]);
	Serial.println(stopWatch.splitTimes[1]);
	Serial.println(stopWatch.splitTimes[2]);
	Serial.println();
}

void loop(){
}