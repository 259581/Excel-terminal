#include <iostream>
#include "tablica.h"
#include "menu.h"
#include "pliki.h"
using namespace std;

void Arkusz::nowa_tablica(int w, int k, int* typk)
{
    this->ilosc_wierszy = w;
    this->ilosc_kolumn = k;
    this->macierz = tworzenie_tablicy(w, k, typk);
}
Cell*** Arkusz::tworzenie_tablicy(int w, int k, int* typk)     
{  
    
    Cell ***arkusz = new Cell**[w];

    for(int i=0; i<w;i++)
    {
       arkusz[i]=new Cell*[k];
       
       for(int j=0; j<k; j++)
       {
            if(typk[j]==0)
            {
                arkusz[i][j] = new Cellstring;

            }
           
            if(typk[j]==1)
            {
                arkusz[i][j] = new Celldouble;
            }
           

       }
    
    }

    
    return arkusz;
}



void Cellstring::setValue(std::string pole)
{
    this->polestring = pole;
}

void Celldouble::setValue(std::string pole)
{
    this->poledouble = stod(pole);
}

std::string Cellstring::getValue()
{
    return polestring;
}

std::string Celldouble::getValue()
{
    return to_string(poledouble);
}

bool Celldouble::getKol()
{
    return false;
}

bool Cellstring::getKol()
{
    return true;
}



int Arkusz::zmiana_wartosci(int w, int k, std::string wartosc)
{
   if((ilosc_wierszy<w || ilosc_kolumn<k))
    {
        return 1;
    }
    else
    {
        if(macierz[w-1][k-1]->getKol()==false)
        {
            this->macierz[w-1][k-1]->setValue(wartosc);
        }

        if(macierz[w-1][k-1]->getKol()==true)
        {
            this->macierz[w-1][k-1]->setValue(wartosc);
        }
        return 0;
    }
  
}

Cell*** Arkusz::aktualizacja_rozmiaru(int w, int k, int* tk)
{
    Cell*** kopia = tworzenie_tablicy(w, k, tk);
    
    
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

void Arkusz::zmiana_rozmiaru(int w,int k, int* tk)
{
    this->macierz = aktualizacja_rozmiaru(w,k,tk);
    this->ilosc_wierszy = w;
    this->ilosc_kolumn = k;
}

void Arkusz::kopiowanie(Cell ***macierz_wej, Cell*** macierz_wyj, int w, int k)
{
    
    
    
    for(int i = 0; i<w; i++)
    {
        for(int j = 0; j<k; j++)
        {
            if(macierz_wej[i][j]->getKol()==false)
            {
                macierz_wyj[i][j]->setValue(macierz_wej[i][j]->getValue());
            }

            if(macierz_wej[i][j]->getKol()==true)
            {
                macierz_wej[i][j]->setValue(macierz_wej[i][j]->getValue());
            }
        }
    }
}

double Arkusz::sumowanie_wierszy(int w)
{
    double a = 0;
    double b = 0;
    
    for(int j=0;j<ilosc_kolumn; j++)
    {
        a = stod(macierz[w-1][j]->getValue());
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
        a = stod(macierz[i][k-1]->getValue());
        b = b + a;
    }
    
  
    return b;
}
double Arkusz::naj_wart_wiersza(int w)
{
    double a = 0;
    a = stod(macierz[w-1][0]->getValue());
    for(int j=0;j<ilosc_kolumn-1; j++)
    {
        if(stod(macierz[w-1][j]->getValue())<stod(macierz[w-1][j+1]->getValue()))
        {
            a = stod(macierz[w-1][j+1]->getValue());
        }
        
    }
    
  
    return a; 
}
double Arkusz::naj_wart_kolumny(int k)
{
    double a = 0;
    a = stod(macierz[0][k-1]->getValue());
    for(int i=0;i<ilosc_wierszy-1; i++)
    {
        if(stod(macierz[i][k-1]->getValue())<stod(macierz[i+1][k-1]->getValue()))
        {
            a = stod(macierz[i+1][k-1]->getValue());
        }
        
    }
    
  
    return a; 
}
double Arkusz::srednia(int num, std::string decyzja)
{
    double a = 0;
    double b = 0;
    if(decyzja == "w")
    {
        for(int j=0;j<ilosc_kolumn; j++)
        {
            a = stod(macierz[num-1][j]->getValue());
            b = b + a;
        }
        b = b/ilosc_kolumn;
        return b;
    }
    else if(decyzja == "k")
    {
        for(int i=0;i<ilosc_wierszy; i++)
        {   
            a = stod(macierz[i][num-1]->getValue());
            b = b + a;
        }
        b = b/ilosc_wierszy;
        return b;
    }
    return a;
}
