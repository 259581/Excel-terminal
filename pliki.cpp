#include <iostream>
#include <fstream>
#include "tablica.h"
#include "menu.h"
#include <cstdlib>
#include <string>
#include "pliki.h"
using namespace std;

int Arkusz::zapis(string nazwa_pliku) 
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
                plik1 << macierz[i][j]->getValue()<<"\t";
            }
            plik1 << endl;
        } 
        
        plik1.close();
        return 0;
    }
    else
    {
        return 1;
    }
    
    
   
}

int Arkusz::odczyt(std::string nazwa_pliku) 
{
    
    int w=0;
    int k=0;
    int* typk;
    std::string a;
    
    nazwa_pliku+=".txt";
    
    ifstream(plik2);
    plik2.open(nazwa_pliku);
    if(plik2.good()==true)
    {
      
       
        plik2>>w;
        plik2>>k;
        typk = typkolumny(k);
        
        
        
        this->macierz = aktualizacja_rozmiaru(w, k, typk);
        this->ilosc_wierszy = w;
        this->ilosc_kolumn = k;

        for(int i=0;i<w; i++)
        {
            for(int j=0;j<k; j++)
            {
                plik2 >> a;
                macierz[i][j]->setValue(a);
            }
        }
        
        
    
        
        plik2.close();
        return 0;
    }
    else 
    {
        return 1;
    }
    
}
