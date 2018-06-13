/*! \file  */

#ifndef TABLICA_H
#define TABLICA_H

#include <iostream>
#include "Struktura.h"
#include <cmath>

/*!
 * \brief Funkcja przerzucająca każdy element ze wzoru podanego typem string, do tablicy dynamicznej, gdzie każdy element jrst liczbą, niewiadomą, lub operatorem
 * \param wczytanie Wzór w typie string
 * \param tab Wskaźnik na pierwszy element tablicy dynamicznej
 */

void wrzuc(string wczytanie, Lista *&tab );

/*!
 * \brief Drukowanie tablicy
 * \param tab Wzkażnik na pierwszy element tablicy
 * \param dlugosc Ilość elementów tablicy (Długość wzoru)
 */
void Drukuj(Lista *tab, int dlugosc);

#endif // TABLICA_H
