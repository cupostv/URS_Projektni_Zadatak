/*

	***********************************************************************
	Autor:
		Mladen Stupar, 1126/12
	
	Opis zadatka:
		Zadatak je da se implementira funkcija koja prima jedan prirodan broj kao parametar
		i na standardni izlaz ispisuje sve prirodne brojeve manje od tog broja, a čiji je zapis
		palindrom. Drugi parametar funkcije je brojni sistem u kom broj treba da bude palindrom.
		Moguća su tri brojna sistema:
			- Oktalni
			- Dekadni
			- Heksadecimalni

	Opis rješenja:
		Funkcija će biti napisana u datoteci palindrom.c. U datoteci palindrom.h će se nalaziti prototip
		funkcije kao i enumeracijski tip ErrorCode koji će imati razne tipove grešaka do kojih može doći.
		U datoteci main.c će biti glavni program u kom će biti prezentovano rješenje zadatka.
		Implementacija funkcije počinje definisanjem svih nevalidnih stanja koja se mogu dogoditi.
		Nakon kontrolisanja nevalidnih parametara funkcije, polazi se od najmanjeg prirodnog broja, pa
		do broja koji je unijet kao prvi argument funkcije, te se za svaki broj računa (odgovarajućim algoritmom)
		njegov ekvivalent u brojnom sistemu koji je proslijeđen kao drugi argument funkcije, te se za takav broj
		provjerava da li je palindrom. Ukoliko jeste, ispisuje se na standardni izlaz (u odgovarajućem formatu).

	Napomena:
		Za prevođenje i pokretanje programa je potrebno iz komandne linije
		pokrenuti makefile naredbom make, a zatim pokrenuti izvršnu datoteku app

*/


#include "../palindrome/palindrome.h"

int32_t main (int32_t argc, uint8_t* argv[])
{
	int32_t number;
	int8_t numberSystem;

	printf("Unesite prvi argument funkcije:\nbroj = ");
	scanf ("%"SCNd32, &number);

	printf("Unesite drugi argument funkcije:\nbrojni sistem = ");
	scanf ("%"SCNd8, &numberSystem);

	palindrome(number, numberSystem);

	return NO_ERROR;
}