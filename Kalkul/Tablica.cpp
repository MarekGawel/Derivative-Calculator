#include "Tablica.h"
#include "Struktura.h"
#include <stdlib.h>

using namespace std;



int toInt(string wzorek, int &i)
{
    int wynik=0, x=0;
    while(wzorek[i]>='0' && wzorek[i]<='9')
    {
        x=wzorek[i]-'0';
        wynik=wynik*10+x;
        //cout<<wynik<<endl;
        i++;
    }



    return wynik;
}

void wrzuc(string wczytanie,Lista *&tab)
{
    int k=0, i=0;
    while(wczytanie[k]!='=')
    {


        if(wczytanie[k]=='c' || wczytanie[k]=='s'|| wczytanie[k]=='l')
        {
            tab[i].znak='q';
            tab[i].liczba=-1;
            if(wczytanie[k]=='s') tab[i].funkcja="sin";
            else if(wczytanie[k]=='c') tab[i].funkcja="cos";
            else if( wczytanie[k]=='l')tab[i].funkcja="ln";
            k++;


        } else if(wczytanie[k]>='0' && wczytanie[k]<='9')
        {
            tab[i].znak='q';

            tab[i].liczba=toInt(wczytanie, k);
            //cout<<tab[i].liczba<<endl;



        }

        else
        {
            tab[i].znak=wczytanie[k];
            tab[i].liczba=-1;


            k++;
        }
        i++;
    }
}

void Drukuj(Lista *tab, int dlugosc)
{
    for(int i=0;i<dlugosc;i++)
    {
        //cout<<tab[i].liczba<<endl;
        if(tab[i].funkcja=="nie") continue;
        else if(tab[i].funkcja=="druga opcja")
        {
            cout<<tab[i].liczba<<' '<<tab[i].znak<<' ';
        }
        if(tab[i].znak=='q')
        {
            if(tab[i].liczba==-1)
            {
                cout<<tab[i].funkcja;
            }
            cout<<tab[i].liczba<<' ';

        }
        else
            cout<<tab[i].znak<<' ';
    }
    cout<<endl;
}


