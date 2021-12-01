#include <iostream>
#include <cmath>
#include <stdlib>
#include "gain_ad.h"

// Gain Constructor
Gain::gainAd(float adjust) : adjust(float newAdjust){}

//Gain adjust 8 bit mono
void Gain::monoBuffer(unsigned char* buffer, int bufferSize){
	
	for(int i = 0; i < bufferSize; i++){
			buffer[i] = buffer[i] * adjust;
		}

}
//Gain adjust 16 bit mono
void Gain::monoBuffer(signed short* buffer, int bufferSize){

	for(int i = 0; i < bufferSize; i++){
			buffer[i] = buffer[i] * adjust;
		}

}
//Gain adjust 8 bit stereo
void Gain::stereoBuffer(unsigned char* buffer, int bufferSize){
	
	//Channel 1	
	for(int i = 0; i < bufferSize; i++){
			buffer[i] = buffer[i] * adjust;
		}
	//Channel 2
	for(int j = 1; j < bufferSize; j++){
			buffer[j] = buffer[j] * adjust;
		}
}
//Gain adjust 16 bit stereo
void Gain::stereoBuffer(signed short* buffer, int bufferSize){
	
	//Channel 1	
	for(int i = 0; i < bufferSize; i++){
			buffer[i] = buffer[i] * adjust;
		}
	
	//Channel 2
	for(int j = 0; j < bufferSize; j++){
			buffer[j] = buffer[j] * adjust;
		}

}
