/*! \file  */

#ifndef STRUKTURA_H
#define STRUKTURA_H

#include <iostream>

using namespace std;

/*!
 * \brief Struktura, która tworzy tablicę dynamiczną, gdzie każdy element jest jednym składnkiem wzoru ( niewiadomą, liczbą, albo znakiem działania)
 *
 */

struct Lista
{
    char znak;
    int liczba;
    string funkcja;
    bool czyPochodnic=true;
};


#endif // STRUKTURA_H
