#include <iostream>
#include <fstream>
#include "tablica.h"
#include "tablica_wysw.h"
#include "menu.h"
#include <cstdlib>
#include <string>
#include "pliki.h"
using namespace std;


void zapis(double **arkusz, int ilosc_wierszy, int ilosc_kolumn, string nazwa_pliku)
{
  nazwa_pliku+=".txt";
  ofstream (plik1);
  
  plik1.open(nazwa_pliku);
   if(plik1.good()==true)
   { 
  
  plik1<<ilosc_wierszy<<endl;
  plik1<<ilosc_kolumn<<endl; 
  
  for(int i=0; i<ilosc_wierszy; i++)
    {
        for(int j=0; j<ilosc_kolumn; j++)
        {
            plik1 << arkusz[i][j]<<"\t";
        }
        plik1 << endl;
    }  
    plik1.close();
   }
   else exit(0);
}
double** odczyt(int *w, int *k, std::string nazwa_pliku)
{
    double a=0;
    nazwa_pliku+=".txt";
    ifstream(plik2);
    plik2.open(nazwa_pliku);
    if(plik2.good()==true)
    {
       
        
        plik2>>*w;
        plik2>>*k;
        
        double** macierz = new double*[*w];

        for(int i=0; i<*w;i++)
        {
            macierz[i]=new double[*k];
        }

        for(int i=0;i<*w; i++)
        {
            for(int j=0;j<*k; j++)
            {
                plik2>>a;
                macierz[i][j] = a;
            }
    }
    return macierz;
    
    
    plik2.close();
    }
    else 
    {
    cout<<"podales zla nazwe pliku"<<endl;
    }
    
}
