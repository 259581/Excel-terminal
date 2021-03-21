#include <iostream>
#include "menu.h"
#include "tablica_wysw.h"
#include "tablica.h"
#include <cstdlib>
#include <stdlib.h>


using namespace std;
    
    int wybor;
void wyswietl_menu()
{
   
    int **macierz;
    int kolumny;
    int wiersze;
    do{
    cout<<"Co chcesz zrobic? Podaj odpowiednia liczbe."<<endl;
    cout<<"1-wyswietl skoroszyt"<<endl;
    cout<<"2-stworz nowa tablice"<<endl;
    cout<<"3-usun stare komorki"<<endl;
    cout<<"4-wyjdz"<<endl;
    cin>>wybor;
    
    
    switch(wybor)
    {
        case 1: 
        //wyswietl_tab(int **macierz, int wiersze, int kolumny);
        break;
        
        case 2: 
        cout<<"Podaj liczbe wierszy"<<endl;
        cin>>wiersze;
        cout<<"Podaj liczbe kolumn"<<endl;
        cin>>kolumny;
        macierz = tworzenie_tablicy(wiersze,kolumny);
        break;
        
        case 3: 
        
        break;
        
        case 4:
        cout<<"wychodze"<<endl;
       

        
        //default:
       // cout<<"nic nie robie, bo podales zly numer"<<endl;
    }
    }
    while(wybor != 4);
}
