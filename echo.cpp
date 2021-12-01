#include <iostream>
#include <cmath>
#include <stdlib>
#include "echo.h"

//Echo Constructor
Echo::echo(int delay) : delay(int newDelay){}

//Echo effect for 8 bit mono
void Echo::monoBuffer(unsigned char* buffer, int bufferSize){
	float originalSignal;
	float value;
	float delaySignal;
	for(int i = 0; i < bufferSize - delay ; i++){
		originalSignal = (float)(buffer[i] - 128);
		delayedSignal = (float)(buffer[i + delay] -128);
		buffer[i + delay] = (unsigned char)(round(value));
		}

}

//Echo effect for 16 bit mono
void Echo::monoBuffer(signed short* buffer, int bufferSize){
	float originalSignal;
	float value;
	float delaySignal;
	for(int i = 0; i < bufferSize - delay ; i++){
		originalSignal = (float)(buffer[i] - 1);
		delayedSignal = (float)(buffer[i + delay] -1);
		buffer[i + delay] = (unsigned char)(round(value));
		}


}

//Echo effect for 8 bit stereo
void Echo::stereoBuffer(unsigned char* buffer, int bufferSize){
	float originalSignal;
	float value;
	float delaySignal;

	//Channel 1	
	for(int i = 0; i < bufferSize - delay ; i++){
		originalSignal = (float)(buffer[i] - 128);
		delayedSignal = (float)(buffer[i + delay] -128);
		buffer[i + delay] = (unsigned char)(round(value));
		}

	//Channel 2	
	for(int j = 1; j < bufferSize - delay ; j++){
		originalSignal = (float)(buffer[j] - 128);
		delayedSignal = (float)(buffer[j + delay] -128);
		buffer[j + delay] = (unsigned char)(round(value));
		}
}

//Echo effect for 16 bit stereo
void Echo::stereoBuffer(signed short* buffer, int bufferSize){
	float originalSignal;
	float value;
	float delaySignal;
	
	//Channel 1	
	for(int i = 0; i < bufferSize - delay ; i++){
		originalSignal = (float)(buffer[i] - 1);
		delayedSignal = (float)(buffer[i + delay] -1);
		buffer[i + delay] = (unsigned char)(round(value));
		}

	//Channel 2
	for(int j = 1; j < bufferSize - delay ; j++){
		originalSignal = (float)(buffer[j] - 1);
		delayedSignal = (float)(buffer[j + delay] -1);
		buffer[j + delay] = (unsigned char)(round(value));
		}

}
