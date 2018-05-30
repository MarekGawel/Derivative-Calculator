#include <wielomiany.h>

using namespace std;

void Pochodnuj(Lista *&tablica, int dlugosc )
{

    for(int i=0;i<dlugosc; i++)
    {
        if(tablica[i].czyPochodnic==true)
        {







            //NP (x3) lub x
            if(tablica[i].znak=='(' )
            {


                if(tablica[i].znak=='(')
                {

                    if(i==0)
                    {
                        cout<<tablica[i+2].liczba;
                        tablica[i+2].liczba--;

                    }
                    else
                    {
                        //if i!=0
                        tablica[i-1].liczba=tablica[i-1].liczba*tablica[i+2].liczba;
                        tablica[i+2].liczba--;
                        if(tablica[i+2].liczba==0)
                        {
                            tablica[i].funkcja="nie";
                            tablica[i+1].funkcja="nie";
                            tablica[i+2].funkcja="nie";
                            tablica[i+3].funkcja="nie";
                        }
                        if(tablica[i+2].liczba==1)
                        {
                            tablica[i].funkcja="nie";
                            tablica[i+2].funkcja="nie";
                            tablica[i+3].funkcja="nie";
                        }
                    }

                }
                else
                {
                    tablica[i].funkcja="nie";
                    if(i==0 && tablica[i+1].znak!='-') tablica[i+1].funkcja="nie";
                    else tablica[i-1].funkcja="nie";

                }

            }
            //NP 654
            if(tablica[i].znak=='q' && tablica[i].liczba!=-1)
            {
                if(tablica[i+1].znak!='(' && tablica[i-1].znak!='x')
                {
                    tablica[i].funkcja="nie";
                    if(i==0) tablica[i+1].funkcja="nie";
                    else tablica[i-1].funkcja="nie";

                }


            }
        }
    }
}

