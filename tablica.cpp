#include <iostream>
#include "tablica.h"
#include "menu.h"
#include "pliki.h"
using namespace std;

void Arkusz::nowa_tablica(int w, int k)
{
    this->ilosc_wierszy = w;
    this->ilosc_kolumn = k;
    this->macierz = tworzenie_tablicy(w, k);
    this->macierz = zerowanie_tablicy();
}
Cell** Arkusz::tworzenie_tablicy(int w, int k)     
{  
    
    Cell **arkusz = new Cell*[w];

    for(int i=0; i<w;i++)
    {
       arkusz[i]=new Cell[k];
    }

    return arkusz;
}
double Cell::getDoubleValue()
{
    return poledouble;
}
double Cell::setDoubleValue(double wartosc)
{
    poledouble = wartosc;
    return poledouble;
}

int Arkusz::zmiana_wartosci(int w, int k, double a)
{
   if((ilosc_wierszy<=w || ilosc_kolumn<=k))
    {
        return 1;
    }
    else
    {
        this->macierz[w-1][k-1].setDoubleValue(a);
        return 0;
    }
  
}

Cell** Arkusz::aktualizacja_rozmiaru(int w, int k)
{
    Cell **kopia = tworzenie_tablicy(w, k);
    for(int i=0;i<w; i++)
    {
        for(int j=0;j<k; j++)
        {    
            kopia[i][j].setDoubleValue(0);
        }
    }
    
    if((ilosc_wierszy<=w || ilosc_kolumn<=k))
    {
        kopiowanie(macierz,kopia, ilosc_wierszy, ilosc_kolumn);
    }
    else
    {
        kopiowanie(macierz,kopia, w, k);
    }
    
    return kopia; 
    
}
void Arkusz::zmiana_rozmiaru(int w,int k)
{
    this->macierz = aktualizacja_rozmiaru(w,k);
    this->ilosc_wierszy = w;
    this->ilosc_kolumn = k;
}

void Arkusz::kopiowanie(Cell **macierz_wej,Cell** macierz_wyj, int w, int k)
{
    for(int i = 0; i<w; i++)
    {
        for(int j = 0; j<k; j++)
        {
            macierz_wyj[i][j].setDoubleValue(macierz_wej[i][j].getDoubleValue());
        }
    }
}


Cell** Arkusz::zerowanie_tablicy()
{

    for(int i=0;i<ilosc_wierszy; i++)
    {
        for(int j=0;j<ilosc_kolumn; j++)
        {
            
            this->macierz[i][j].setDoubleValue(0);
        }
    }
    return macierz;
}
double Arkusz::sumowanie_wierszy(int w)
{
    double a = 0;
    double b = 0;
    
    for(int j=0;j<ilosc_kolumn; j++)
    {
        a = macierz[w-1][j].getDoubleValue();
        b = b + a;
    }
    
  
    return b;
}
double Arkusz::sumowanie_kolumn(int k)
{
    double a = 0;
    double b = 0;
    
    for(int i=0;i<ilosc_wierszy; i++)
    {
        a = macierz[i][k-1].getDoubleValue();
        b = b + a;
    }
    
  
    return b;
}
double Arkusz::naj_wart_wiersza(int w)
{
    double a = 0;
    a = macierz[w-1][0].getDoubleValue();
    for(int j=0;j<ilosc_kolumn-1; j++)
    {
        if(macierz[w-1][j].getDoubleValue()<macierz[w-1][j+1].getDoubleValue())
        {
            a = macierz[w-1][j+1].getDoubleValue();
        }
        
    }
    
  
    return a; 
}
double Arkusz::naj_wart_kolumny(int k)
{
    double a = 0;
    a = macierz[0][k-1].getDoubleValue();
    for(int i=0;i<ilosc_wierszy-1; i++)
    {
        if(macierz[i][k-1].getDoubleValue()<macierz[i+1][k-1].getDoubleValue())
        {
            a = macierz[i+1][k-1].getDoubleValue();
        }
        
    }
    
  
    return a; 
}
double Arkusz::srednia(int z, int d)
{
    double a = 0;
    double b = 0;
    if(d='w')
    {
        for(int j=0;j<ilosc_kolumn; j++)
        {
            a = macierz[z-1][j].getDoubleValue();
            b = b + a;
        }
        b = b/ilosc_kolumn;
        return b;
    }
    else if(d='k')
    {
        for(int i=0;i<ilosc_wierszy; i++)
        {   
            a = macierz[i][z-1].getDoubleValue();
            b = b + a;
        }
        b = b/ilosc_wierszy;
        return b;
    }
    return a;
}