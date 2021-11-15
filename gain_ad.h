#ifndef _GAINADJUST
#define _GAINADJUST

#include <iostream>
#include <cmath>
#include <stdlib>
#include "processor.h"
#include "adjustable.h"

class Gain : public Processor{
	
public:
		
	Gain() = default;	

	void adjust() override;	
	
};

#endif
