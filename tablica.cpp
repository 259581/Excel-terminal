#include <iostream>
#include "tablica.h"
#include "menu.h"
#include "tablica_wysw.h"
#include "pliki.h"
using namespace std;

int ** tworzenie_tablicy(int ilosc_wierszy,int ilosc_kolumn)
{
    
    
    
    
    int** macierz = new int*[ilosc_wierszy];

    for(int i=0; i<ilosc_wierszy;i++)
    {
       macierz[i]=new int[ilosc_kolumn];
    }

    for(int i=0;i<ilosc_wierszy; i++)
    {
        for(int j=0;j<ilosc_kolumn; j++)
        {
            
            macierz[i][j] = 1;
        }
    }
    
    
    return macierz;
}
void zmiana_wartosci(int **macierz, int numer_wiersza, int numer_kolumny)
{
    int a=0;
    cout<<"Jaka wartosc chcesz wprowadzic?"<<endl;
    cin>>a;
    cout<<"Podaj numer wiersza"<<endl;
    cin>>numer_wiersza;
    cout<<"Podaj numer kolumny"<<endl;
    cin>>numer_kolumny;
    macierz[(numer_wiersza)-1][(numer_kolumny)-1] = a;
}