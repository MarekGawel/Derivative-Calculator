#include <iostream>
#include "Struktura.h"
#include "Tablica.h"
#include "pliki.h"
#include "wielomiany.h"


using namespace std;



int main()
{




    cout<<"INSTRUKCJA: \nWpisz wzór w postaci '3+3(x2)+5(x18)=', gdy f(x)=3+3*x^2+5*x^18"<<endl;
    cout<<"Skróty:"<<endl;
    cout<<"s=>sin"<<endl;
    cout<<"c=>cos"<<endl;
    cout<<"l=>ln"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    string wzor;
    zCzego(wzor);
    int len=wzor.size();
    Lista *tab;
    //cout<<len<<"<-Liczba elementow"<<endl;
    tab=new Lista[len];


    wrzuc(wzor, tab);
    //cout<<"tablica:"<<endl;
    //Drukuj(tab,len);

    Pochodnuj(tab, len);


      cout<<"Pochodna:"<<endl;
      Drukuj(tab,len);
      cout<<endl;
      //cout<<"spr"<<endl;


    delete []tab;


    return 0;
}

