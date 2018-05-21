#include "Tablica.h"
#include "Struktura.h"
#include "pliki.h"
using namespace std;




int toInt(string wzorek, int &i)
{
    int wynik, x;
    do
    {
        x=wzorek[i]-'0';
        wynik=wynik*10+x;
        i++;
    }while(wzorek[i]>='0' && wzorek[i]<='9');

    return wynik;
}

void wrzuc(string wczytanie,Lista *&tab)
{
    int k, i;
    while(wczytanie[k]!='=')
    {
        if(wczytanie[k]>='0' && wczytanie[k]<='9')
        {
            tab[i].znak='q';
            tab[i].liczba=toInt(wczytanie, k);
        }
        else
        {
            tab[i].znak=wczytanie[k];
            k++;
        }
    }
}
