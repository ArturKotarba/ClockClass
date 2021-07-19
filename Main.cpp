/*
* 
* Zaimplementuj klasê Clock:
Klasa powinna mieæ pola prywatne reprezentuj¹ce godzinê minutê i sekundê.
Konstruktor domyœlny niech inicjuje godzinê 00:00:00.
Utwórz konstruktor 3-argumentowy, gdzie argumentami bêd¹ godzina, minuty(domyœlnie 0) i sekundy(domyœlnie 0).
Napisz metodê tick(), która bêdzie zwiêksza³a wskazanie zegara o sekundê.
Napisz metody zwiêkszaj¹ce godziny, minuty, sekundy o podane jako argument wartoœci. Funkcja mo¿e przyjmowaæ te¿ wartoœci ujemne.
Dwa zegary s¹ równe wtedy gdy reprezentuj¹ ten sam czas.
Zaimplementuj metodê zwracaj¹c¹ napis reprezentuj¹cy przechowywan¹ godzinê.
* 
*/

// Main.cpp file

#include <iostream>
#include "Clock.h"

using namespace std;

int main()
{
	//Dwa zegary s¹ równe wtedy gdy reprezentuj¹ ten sam czas. - Nie rozumiem co tu trzeba zrobic
	Clock Monday(4, 20, 58);
	Monday.adder(2, 49, 1);
	Monday.displayTheCurrentTime();
}