// Clock.cpp file

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include "Clock.h"

using namespace std;

// implementacja kazdej z metod  

Clock::Clock(): hour(00), minute(00), second(00) {}

Clock::Clock(double hour, double minute, double second): hour(hour), minute(minute), second(second) {}

void Clock::tick() {
	// Bardzo bym prosil o pokazanie lepszej metody na inkrementacje godziny bo wiem ze jest ona malo czytelna

	if (second < 59 && minute <= 59 && hour <= 23){
		second++;
	}
	else if (second >= 59 && minute < 59 && hour <= 23) {
		second = 00;
		minute++;
	}
	else if (second >= 59 && minute >= 59 && hour < 23){
		minute = 00;
		second = 00;
		hour++;
	}
	else{
		minute = 00;
		second = 00;
		hour = 00;
		cout << "We've got a new day, hopefully it's not monday!\n";
	}
}

void Clock::adder(double hour, double minute, double second) { 

	this->second += second;

	if (this->second < 0) { // kiedy sekundy sa mniejsze do 60
		int temp = this->second;
		this->second = fmod(this->second, 60) + 60;
		temp = ((temp - this->second) / 60) + 0.5;
		this->minute = this->minute + temp - 1;
	}

	if (this->second > 60) { // kiedy sekundy sa wieksze od 60
		double temp = this->second;
		this->second = fmod(this->second, 60);
		temp = (temp - (this->second)) / 60;
		this->minute += temp;
	}

	this->minute += minute;

	if (this->minute < 0) { // kiedy minuty sa mniejsze do 60
		int temp = this->minute;
		this->minute = fmod(this->minute, 60) + 60; 
		temp = ((temp - this->minute) / 60) + 0.5; 
		this->hour = this->hour + temp - 1;
	}

	if (this->minute > 60) { // kiedy minuty sa wieksze od 60
		double temp = this->minute; 
		this->minute = fmod(this->minute, 60);  
		temp = (temp - (this->minute)) / 60; 
		this->hour += temp;
	}

	this->hour += hour;

	if (this->hour < 0) { // kiedy godzina jest mniejsza od 24
		double temp = this->hour; 
		this->hour = fmod(this->hour, 24) + 24; 
	}
	if (this->hour > 24) { // kiedy godziny sa wieksze od 24
		this->hour = fmod(this->hour, 24);
	}
}

void Clock::displayTheCurrentTime() {
	if (second <= 59 && minute <= 59 && hour <= 23)
	{
		cout << "Current time: " << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << ":" << setw(2) << setfill('0') << second << endl;
	}
}