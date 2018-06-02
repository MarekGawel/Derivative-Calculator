#include "funkcje.h"

void jakSaFunkcje(Lista*&tab, int i)
{
    if(tab[i].funkcja=="sin")
    {
        tab[i].funkcja="cos";
    }
    else if(tab[i].funkcja=="cos")
    {
        if(tab[i-1].znak!='q')
            tab[i-1].funkcja="nie";
        else
            tab[i-2].funkcja="nie";

        tab[i].funkcja="- sin";
    }
    else if(tab[i].funkcja=="ln")
    {
        tab[i].funkcja="1 /";
        tab[i+1].funkcja="nie";
        tab[i+1].funkcja="nie";
    }

    tab[i+1].czyPochodnic=false;
    tab[i+2].czyPochodnic=false;
    tab[i+3].czyPochodnic=false;

}


