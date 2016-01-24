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
		do broja koji je unijet kao prvi argument funkcije, te se za svaki broj provjerava da li je palindrom
		u odgovarajućem brojnom sistemu. Ako jeste, ispisuje se na standardni izlaz. Algoritam provjeravanja
		da li je neki broj palindrom u nekom brojnom sistemu se realizuje na osnovu činjenice da se svaki broj
		može predstaviti kao cifra*baza^0 + cifra*baza^1 + cifra*baza^2 + cifra*baza^3... Ako za neki broj dobijamo
		cifre (počevši od najlakše ka najtežoj), obrnut broj (od broja za koji se provjerava da li je palindrom) se
		dobija: obrnut_broj = obrnut_broj*baza + cifra. Na kraju, ako su obrnut broj i broj za koji se provjerava da 
		li je palindrom, jednaki, broj je palindrom.

	Napomena:
		Za prevođenje i pokretanje programa je potrebno iz komandne linije
		pokrenuti makefile naredbom make, a zatim pokrenuti izvršnu datoteku app

*/


#include "../palindrome/palindrome.h"

#define ASSERT(x, y) 										\
		if (x == ERROR_NOT_INTEGER || x == ERROR_BASE)		\
		{													\
			printf("%s\n", y);								\
			return ERROR;									\
		}													\

int32_t main(int32_t argc, uint8_t* argv[])
{
	int32_t number;
	int8_t base;
	ErrorCode error;

	printf("\nDozvoljeni brojni sistemi su:\n\tOktalni (8)\n\tDekadni (10)\n\tHeksadecimalni (16)\n\n");

	printf("Unesite prvi argument funkcije:\nbroj = ");
	scanf("%"SCNd32, &number);

	printf("Unesite drugi argument funkcije:\nbrojni sistem = ");
	scanf("%"SCNd8, &base);

	error = palindrome(number, base);
	ASSERT(error, "Greška pri unosu parametara funkcije");

	return NO_ERROR;
}