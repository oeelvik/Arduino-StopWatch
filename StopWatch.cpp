/*
 * StopWatch.h
 *
 * author: Øystein Schrøder Elvik
 */

#include "StopWatch.h"

StopWatch::StopWatch(){}

void StopWatch::init(){
	overhead = 0;
	clear();
	split();
	split();
	split();
	overhead = splitTimes[2] - 4;
	//micros has resolution of 4 and we do not want it to wrap around in case of rounding upp overhead
	//This means that calling split multiple times without code inbetween will give us a result between 0 and 8
	// - 4 makes shure we never get negative numbers resulting in unsigned wrap around 

	clear();
}

void StopWatch::clear(){
	index = 0;
}

void StopWatch::split(){
	now = micros();
	splitTimes[index] = now - lastTime - overhead;
	index++;
	lastTime = now;
}