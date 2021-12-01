#ifndef _ECHO
#define _ECHO

#include <iostream>
#include <cmath>
#include <cstdlib>
#include "processor.h"
#include "echoable.h"

//Class Echo
class Echo : public Processor {
	
public:
	
	/*
	* Default Constructor
	*/
	Echo() = default;

	/*
	* Constructor @param delay
	*/
	echo(int delay)	
	
	/*
	* Mono and stereo override @ param buffer, buffersize
	*/
        void monoBuffer(unsigned char* buffer, int bufferSize) override;
	void monoBuffer(signed short* buffer, int bufferSize) override;
	void stereoBuffer(unsigned char* buffer, int bufferSize) override;
	void stereoBuffer(signed short* buffer, int bufferSize) override;
		
	
};

#endif

