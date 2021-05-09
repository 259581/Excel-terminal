#include <iostream>
#include <fstream>
#include "tablica.h"
#include "tablica_wysw.h"
#include "menu.h"
#include <cstdlib>
#include <string>
#include "pliki.h"
using namespace std;


int p_a::zapis(string nazwa_pliku) 
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
                plik1 << macierz[i][j]<<"\t";
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

int p_a::odczyt(std::string nazwa_pliku) 
{
    int nlw=0;
    int nlk=0;
    double a=0;
    nazwa_pliku+=".txt";
    ifstream(plik2);
    plik2.open(nazwa_pliku);
    if(plik2.good()==true)
    {
       
        
        plik2>>nlw;
        plik2>>nlk;
        
        

        double** sheet = new double*[nlw];

        for(int i=0; i<nlw;i++)
        {
            sheet[i]=new double[nlk];
        }

        this->macierz = this->aktualizacja_rozmiaru(nlw, nlk);
        

        for(int i=0;i<nlw; i++)
        {
            for(int j=0;j<nlk; j++)
            {
                plik2>>a;
                this->macierz[i][j] = a;
            }
        }
      
    
    
        this->ilosc_wierszy = nlw;
        this->ilosc_kolumn = nlk;
        plik2.close();
        return 0;
    }
    else 
    {
        return 1;
    }
    
}
