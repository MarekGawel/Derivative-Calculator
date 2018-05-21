#include <iostream>
#include "Struktura.h"
#include "Tablica.h"
#include "pliki.h"

using namespace std;



int main()
{
    string wzor;
    zCzego(wzor);
    int len=wzor.size()-1;
    Lista *tab =new Lista[len];

    wrzuc(wzor, tab);

    for(int i=0;i<len;i++)
    {
        if(tab[i].znak=='q')
            cout<<tab[i].liczba<<' '<<endl;
        else
            cout<<tab[i].znak<<' '<<endl;
    }




    return 0;
}

