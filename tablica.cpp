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
int p_a::zmiana_wartosci(int numer_wiersza, int numer_kolumny, double a)
{
   if((p_a::ilosc_wierszy<=numer_wiersza || p_a::ilosc_kolumn<=numer_kolumny))
    {
        return 1;
    }
    else
    {
        this->macierz[(numer_wiersza)-1][(numer_kolumny)-1] = a;
        return 0;
    }
   
}
double** p_a::aktualizacja_rozmiaru(int nlw, int nlk)
{
    double **kopia = tworzenie_tablicy(nlw, nlk);
    
    if((p_a::ilosc_wierszy<=nlw || p_a::ilosc_kolumn<=nlk))
    {
        kopiowanie(kopia, p_a::macierz, p_a::ilosc_wierszy, p_a::ilosc_kolumn);
    }
    else
    {
        kopiowanie(kopia, p_a::macierz, nlw, nlk);
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
int p_a::dodawanie(int numer_wiersza, int numer_kolumny, double a)
{
    if((p_a::ilosc_wierszy<=numer_wiersza || p_a::ilosc_kolumn<=numer_kolumny))
    {
        return 1;
    }
    else
    {
        this->macierz[(numer_wiersza)-1][(numer_kolumny)-1] = this->macierz[(numer_wiersza)-1][(numer_kolumny)-1] + a;
        return 0;
    }
   
    
}
  int p_a::liczenie_sredniej(int numer_wiersza, int numer_kolumny, double suma, int ilosc_liczb)
{
      
    
    if((p_a::ilosc_wierszy<=numer_wiersza || p_a::ilosc_kolumn<=numer_kolumny))
    {
        return 1;
    }
    else
    {
      double srednia = suma/ilosc_liczb;
      this->macierz[(numer_wiersza)-1][(numer_kolumny)-1] = srednia;
      
     
      return 0;
    }
    
}