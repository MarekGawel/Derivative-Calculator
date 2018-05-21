
#include "pliki.h"

using namespace std;



void zCzego(string &przyklad)
{
    char wybor;
    string wzor;
    cout<<"Czy chcesz podać wzór z pliku tekstowego, czy wpisać go na konsoli? \n 1.Konsola \n 2.Plik tekstowy"<<endl;
    cin>>wybor;
    if(wybor=='1')
    {
        cout<<"Wpisz wzór: \n";
        cin>>przyklad;

    }
    if(wybor=='2')
    {
        string nazwa;
        cout<<"Podaj nazwę pliku: ";
        cin>>nazwa;

        ifstream plik(nazwa.c_str());
        getline(plik, przyklad);

    }


}

