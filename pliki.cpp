#include <iostream>
#include <fstream>
#include "tablica.h"
#include "tablica_wysw.h"
#include "menu.h"
#include <cstdlib>
#include <string>
#include "pliki.h"
using namespace std;


int zapis(struct p_a arkusz, string nazwa_pliku) //poprawic tabulatory
{
    nazwa_pliku+=".txt";
    ofstream (plik1);
  
    plik1.open(nazwa_pliku);
    if(plik1.good()==true)
    {
    
        plik1<<arkusz.ilosc_wierszy<<endl;
        plik1<<arkusz.ilosc_kolumn<<endl; 
    
        for(int i=0; i<arkusz.ilosc_wierszy; i++)
        {
            for(int j=0; j<arkusz.ilosc_kolumn; j++)
            {
                plik1 << arkusz.macierz[i][j]<<"\t";
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

int odczyt(struct p_a *arkusz, std::string nazwa_pliku) 
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

         arkusz->macierz = aktualizacja_rozmiaru(sheet, arkusz->ilosc_wierszy, arkusz->ilosc_kolumn, nlw, nlk);
        

        for(int i=0;i<nlw; i++)
        {
            for(int j=0;j<nlk; j++)
            {
                plik2>>a;
                arkusz->macierz[i][j] = a;
            }
        }
      
    
    
        arkusz->ilosc_wierszy = nlw;
        arkusz->ilosc_kolumn = nlk;
        plik2.close();
        return 0;
    }
    else 
    {
        return 1;
    }
    
}
