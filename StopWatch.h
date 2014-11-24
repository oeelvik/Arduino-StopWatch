/*
 * StopWatch.h
 *
 * author: Øystein Schrøder Elvik
 */

#ifndef STOPWATCH_H_
#define STOPWATCH_H_

#define MAX_SPLIT_TIMES 20

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class StopWatch{
public:
	StopWatch();
	void init();
	void clear();
	void split();

	unsigned long splitTimes[MAX_SPLIT_TIMES];
	int index;
private:
	unsigned long now;
	unsigned long lastTime;
	unsigned long overhead;
};


#endif /* STOPWATCH_H_ */
