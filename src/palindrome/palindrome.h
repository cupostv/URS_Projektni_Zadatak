/** \file palindrome.h
 *	\brief Ovaj fajl je dokumentovan u skladu sa doxygen dokumentacijom.
 *
 *
 */

#ifndef PALINDROME_H
#define PALINDROME_H

#include <stdio.h>
#include <inttypes.h>
#include <errno.h>

/* \brief Definicija enumeracionog tipa ErrorCode koji pruža različite greške u skladu sa tekstom projektnog zadatka 
 *
*/
typedef enum _ErrorCode
{
	NO_ERROR = 0,
	ERROR_NOT_INTEGER,
	ERROR_BASE,
	ERROR = -1
} ErrorCode;

/** \brief Ova funkcija ispisuje sve brojeve koji su manji od \a number i koji su palindromi u brojnom sistemu \a base
 *  \param number Broj do kog se ispisuju brojevi koji su palindromi u brojnom sistemu \a base. Mora biti pozitivan.
 *  \param base Brojna osnova u kojoj se provjerava da li su brojevi manji od \a number palindromi.
 *				Mora biti jedan od brojeva 8, 10 ili 16 (u skladu sa tekstom projektnog zadatka) ali se može jednostavno modifikovati tako da podržava sve brojne sisteme.
 *  \retval \ref ErrorCode Povratna vrijednost je ERROR_NOT_INTEGER ako broj \a number nije prirodan broj, ERROR_BASE ako brojni sistem \a base nije jedan od 3 dozvoljena brojna sistema i NO_ERROR inače.
 */
ErrorCode palindrome(int32_t number, int8_t base);

/** \brief Ova funkcija provjerava da li je broj \a number palindrom u brojnom sistemu sa osnovom \a base.
 *  \param number Broj za koji se provjerava da li je palindrom. Mora biti pozitivan.
 *  \param base Brojna osnova u kojoj se provjerava da li je \a number palindrom. Mora biti pozitivan.
 *  \retval uint8_t Povratna vrijednost je TRUE ako je broj palindrom i FALSE inače.
 */
uint8_t isPalindrome(int32_t number, int8_t base);

#endif