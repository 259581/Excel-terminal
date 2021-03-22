#include <iostream>
#include <fstream>
#include "tablica.h"
#include "tablica_wysw.h"
#include "menu.h"
#include <cstdlib>
#include <string>
#include "pliki.h"
using namespace std;


void zapis(std::ofstream& plik1, int **arkusz, int ilosc_wierszy, int ilosc_kolumn)
{
  
  plik1.open("text1.txt");
   if(plik1.good()==true)
   { 
   
  for(int i=0; i<ilosc_wierszy; i++)
    {
        for(int j=0; j<ilosc_kolumn; j++)
        {
            plik1 << arkusz[i][j]<<'\t';
        }
        cout<< endl;
    }  
    plik1.close();
   }
   else exit(0);
}
int** odczyt(std::ifstream& plik2, int wiersze, int kolumny)
{
    plik2.open("text1.txt");
    if(plik2.good()==true)
    {
    int a=0;
    
    plik2 >> wiersze;
    plik2 >> kolumny;
    int** macierz = new int*[wiersze];

    for(int i=0; i<wiersze;i++)
    {
       macierz[i]=new int[kolumny];
    }

    for(int i=0;i<wiersze; i++)
    {
        for(int j=0;j<kolumny; j++)
        {
            plik2 >> a;
            macierz[i][j] = a;
        }
    }
    return macierz;
    
    
    plik2.close();
    }
    else exit(0);
}
