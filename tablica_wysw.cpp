#include <iostream>
#include "tablica_wysw.h"
#include "tablica.h"
#include "menu.h"
#include "pliki.h"
using namespace std;

void wyswietl_tab(class p_a arkusz)
{
  
    
  
  
  cout<<"macierz "<< arkusz.ilosc_wierszy << 'x' << arkusz.ilosc_kolumn << endl;
         for(int i=0; i<arkusz.ilosc_wierszy; i++)
         {
             for(int j=0; j<arkusz.ilosc_kolumn; j++)
             {
                 cout<<arkusz.macierz[i][j]<<'\t';

             }
         cout<<endl;
         }
   
   
}