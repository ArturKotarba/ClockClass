// Clock.h file

#ifndef _CLOCKCLASS_
#define _CLOCKCLASS_

class Clock
{
	double hour, minute, second; // tworzymy zmienne sekunda ,minuta, godzina
public:
	Clock(); // konstruktor domyslmy
	Clock(double hour, double minute = 00, double second = 00); // konstruktor z argumentami 
	void tick(); // metoda tic zwiekszajaca zegar o jedna sekunde
	void adder(double hour, double minute, double second); // metoda czas o podane wartosci
	void displayTheCurrentTime(); // metoda wyswietlajaca aktualny czas
};

#endif // !_CLOCKCLASS_

