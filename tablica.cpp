#include <iostream>
#include "tablica.h"
#include "menu.h"
#include "tablica_wysw.h"
using namespace std;

int ** tworzenie_tablicy(int wiersze,int kolumny)
{
    
    
    
    
    int** macierz = new int*[wiersze];

    for(int i=0; i<wiersze;i++)
    {
       macierz[i]=new int[kolumny];
    }

    for(int i=0;i<wiersze; i++)
    {
        for(int j=0;j<kolumny; j++)
        {
            
            macierz[i][j] = 1;
        }
    }
    
    cout<<"macierz "<< wiersze << 'x' << kolumny << endl;
         for(int i=0; i<wiersze; i++)
         {
             for(int j=0; j<kolumny; j++)
             {
                 cout<<macierz[i][j]<<'\t';

             }
         cout<<endl;
         }
    return macierz;
}
void zmiana_wartosci(int **macierz)
{
    
    
    
}