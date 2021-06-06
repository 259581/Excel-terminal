#include <iostream>
#include "tablica.h"
#include "menu.h"
#include "pliki.h"
using namespace std;

void Arkusz::wyswietl_tab()
{  
    cout<<"macierz "<< ilosc_wierszy << 'x' << ilosc_kolumn << endl;
        for(int i=0; i<ilosc_wierszy; i++)
        {
            for(int j=0; j<ilosc_kolumn; j++)
            {
                cout<<macierz[i][j]->getValue()<<"\t";
            }
         cout<<endl;
        }
}
