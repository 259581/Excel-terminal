#include <iostream>
#include "tablica_wysw.h"
#include "tablica.h"
#include "menu.h"
using namespace std;

void wyswietl_tab(int **macierz, int wiersze, int kolumny)
{
  cout<<"wyswietlam skoroszyt"<<endl;
        cout<<"*****************************"<<endl;
  
  
  cout<<"macierz "<< wiersze << 'x' << kolumny << endl;
         for(int i=0; i<wiersze; i++)
         {
             for(int j=0; j<kolumny; j++)
             {
                 cout<<macierz[i][j]<<'\t';

             }
         cout<<endl;
         }
   
   cout<<"tablica sie wyswietlila"<<endl;

}