#include <iostream>
#include "tablica.h"
#include "menu.h"
#include "tablica_wysw.h"
#include "pliki.h"
using namespace std;

double** tworzenie_tablicy(int ilosc_wierszy,int ilosc_kolumn)
{
    
    
    
    
    double **arkusz = new double*[ilosc_wierszy];

    for(int i=0; i<ilosc_wierszy;i++)
    {
       arkusz[i]=new double[ilosc_kolumn];
    }

    zerowanie_tablicy(arkusz, ilosc_wierszy, ilosc_kolumn);

    return arkusz;
    
    
    
    
}
int zmiana_wartosci(struct p_a arkusz, int numer_wiersza, int numer_kolumny, double a)
{
   if((arkusz.ilosc_wierszy<=numer_wiersza || arkusz.ilosc_kolumn<=numer_kolumny))
    {
        return 1;
    }
    else
    {
        arkusz.macierz[(numer_wiersza)-1][(numer_kolumny)-1] = a;
        return 0;
    }
   
}
double **aktualizacja_rozmiaru(double **macierz, int ilosc_wierszy,int ilosc_kolumn, int nlw, int nlk)
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
void kopiowanie(double **macierz_wyj, double **macierz_wej, int ilosc_wierszy, int ilosc_kolumn)
{
    for(int i = 0; i<ilosc_wierszy; i++)
    {
        for(int j = 0; j<ilosc_kolumn; j++)
        {
            macierz_wyj[i][j] = macierz_wej[i][j];
        }
    }
}
void zerowanie_tablicy(double **macierz, int ilosc_wierszy, int ilosc_kolumn)

{

    for(int i=0;i<ilosc_wierszy; i++)
    {
        for(int j=0;j<ilosc_kolumn; j++)
        {
            
            macierz[i][j] = 0;
        }
    }
}
void dodawanie(double a, int numer_wiersza, int numer_kolumny, double **macierz)
{
    macierz[(numer_wiersza)-1][(numer_kolumny)-1] += a;
}
