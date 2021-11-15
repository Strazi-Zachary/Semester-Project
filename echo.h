#ifndef _ECHO
#define _ECHO

#include <iostream>
#include <cmath>
#include <stdlib>
#include "processor.h"
#include "echoable.h"

class Echo : public Processor {
	
public:
	
	Echo() = default;	

	void reverberate() override;
		
	
};

#endif

