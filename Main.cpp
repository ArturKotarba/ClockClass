/*
* 
* Zaimplementuj klas� Clock:
Klasa powinna mie� pola prywatne reprezentuj�ce godzin� minut� i sekund�.
Konstruktor domy�lny niech inicjuje godzin� 00:00:00.
Utw�rz konstruktor 3-argumentowy, gdzie argumentami b�d� godzina, minuty(domy�lnie 0) i sekundy(domy�lnie 0).
Napisz metod� tick(), kt�ra b�dzie zwi�ksza�a wskazanie zegara o sekund�.
Napisz metody zwi�kszaj�ce godziny, minuty, sekundy o podane jako argument warto�ci. Funkcja mo�e przyjmowa� te� warto�ci ujemne.
Dwa zegary s� r�wne wtedy gdy reprezentuj� ten sam czas.
Zaimplementuj metod� zwracaj�c� napis reprezentuj�cy przechowywan� godzin�.
* 
*/

// Main.cpp file

#include <iostream>
#include "Clock.h"

using namespace std;

int main()
{
	//Dwa zegary s� r�wne wtedy gdy reprezentuj� ten sam czas. - Nie rozumiem co tu trzeba zrobic
	Clock Monday(4, 20, 58);
	Monday.adder(2, 49, 1);
	Monday.displayTheCurrentTime();
}