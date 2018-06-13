#include <wielomiany.h>

using namespace std;


void Pochodnuj(Lista *&tablica, int dlugosc )
{

    for(int i=0;i<dlugosc; i++)
    {
        if(tablica[i].czyPochodnic)
        {
            if(tablica[i].funkcja=="sin" ||tablica[i].funkcja=="cos"||tablica[i].funkcja=="ln")
                jakSaFunkcje(tablica, i);

            //JESLI JEST X
            else if(tablica[i].znak=='x' )
            {
                //jezeli przed jest liczba, lub znak + czy - tj. x w pierwszej potedze
                if(tablica[i-1].znak=='q' || tablica[i-1].znak=='+' || tablica[i-1].znak=='-' || i==0)
                {


                    //przed jest liczba -> 2x
                    if(tablica[i-1].znak=='q')
                        tablica[i].funkcja=="nie";



                    // przed jest operator -> 3+x
                    else
                    {
                        tablica[i].znak='q';
                        tablica[i].liczba=1;
                    }
                }


                else if(tablica[i-1].znak=='(' )
                {
                    //przed nawiasem nie ma liczby -> 3+(x3)
                    if( tablica[i-2].znak!='q' )
                    {
                        tablica[i-1].funkcja=="druga opcja";
                        tablica[i-1].liczba= (-1)*tablica[i+1].liczba*tablica[i-1].liczba;
                        tablica[i+1].liczba--;


                    }
                    //przed x znajduje sie jakas liczba
                    else if(tablica[i-2].znak=='q')
                    {
                        tablica[i-2].liczba=tablica[i-2].liczba*tablica[i+1].liczba;
                        tablica[i+1].liczba--;

                    }

                }






                //sprawdzenie czy sie zeruje
                if(tablica[i+1].liczba==0)
                {



                    if(tablica[i-1].znak=='(')
                    {
                        tablica[i-1].funkcja="nie";
                        tablica[i+2].funkcja="nie";
                    }
                    tablica[i].funkcja="nie";
                    tablica[i+1].funkcja="nie";

                }
            }



            //wyrazy wolne
            if(tablica[i].znak=='q' && tablica[i].liczba!=-1)
            {
                if(tablica[i+1].znak!='(' && tablica[i-1].znak!='x' &&tablica[i+1].znak!='x')
                {
                    tablica[i].funkcja="nie";
                    if(i==0) tablica[i+1].funkcja="nie";
                    else tablica[i-1].funkcja="nie";

                }


            }
        }
    }
}

