#ifndef _ECHO
#define _ECHO

#include <iostream>
#include <cmath>
#include <cstdlib>
#include "processor.h"
#include "echoable.h"

class Echo : public Processor {
	
public:
	
	Echo() = default;

	echo(int delay)	
	
        void monoBuffer(unsigned char* buffer, int bufferSize) override;
	void monoBuffer(signed short* buffer, int bufferSize) override;
	void stereoBuffer(unsigned char* buffer, int bufferSize) override;
	void stereoBuffer(signed short* buffer, int bufferSize) override;
		
	
};

#endif

