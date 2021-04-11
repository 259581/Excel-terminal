#include <iostream>
#include "tablica.h"
#include "menu.h"
#include "tablica_wysw.h"
#include "pliki.h"
using namespace std;

double **tworzenie_tablicy(int ilosc_wierszy,int ilosc_kolumn)
{
    
    
    
    
    double** macierz = new double*[ilosc_wierszy];

    for(int i=0; i<ilosc_wierszy;i++)
    {
       macierz[i]=new double[ilosc_kolumn];
    }

    for(int i=0;i<ilosc_wierszy; i++)
    {
        for(int j=0;j<ilosc_kolumn; j++)
        {
            
            macierz[i][j] = 0;
        }
    }
    
    return macierz;
}
void zmiana_wartosci(double **macierz, int numer_wiersza, int numer_kolumny, double a)
{
   macierz[(numer_wiersza)-1][(numer_kolumny)-1] = a;
}
double **aktualizacja_rozmiaru(double **macierz, int nlw, int nlk, int ilosc_wierszy, int ilosc_kolumn)
{
    double **kopia = tworzenie_tablicy(nlw, nlk);
    if((ilosc_wierszy<=nlw || ilosc_kolumn<=nlk))
    {
        kopiowanie(kopia, macierz, ilosc_wierszy, ilosc_kolumn);
    }
    else
    {
       kopiowanie(kopia, macierz, nlw, nlk);
    }
    
    
    return kopia; 
    
}
void kopiowanie(double **macierz1, double **macierz2, int ilosc_wierszy, int ilosc_kolumn)
{
    for(int i = 0; i<ilosc_wierszy; i++)
    {
        for(int j = 0; j<ilosc_kolumn; j++)
        {
            macierz1[i][j] = macierz2[i][j];
        }
    }
}