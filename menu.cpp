#include <iostream>
#include "menu.h"
#include "tablica_wysw.h"
#include "tablica.h"
#include <cstdlib>
#include <stdlib.h>
#include "pliki.h"
#include <fstream>
using namespace std;
    
    int wybor;
void wyswietl_menu()
{
    ofstream plik1;
    ifstream plik2;
    int **macierz;
    int **arkusz;
    int wiersze=0;
    int kolumny=0;
    int ilosc_kolumn = 0;
    int ilosc_wierszy = 0;
    int numer_wiersza = 0;
    int numer_kolumny = 0;
    do{
    cout<<"Co chcesz zrobic? Podaj odpowiednia liczbe."<<endl;
    cout<<"1-stworz nowa tablice"<<endl;
    cout<<"2-wyswietl tablice"<<endl;
    cout<<"3-zapisz na dysk"<<endl;
    cout<<"4-odczytaj z dysku"<<endl;
    cout<<"5-zmien wartosc w arkuszu"<<endl;
    cout<<"6-wyjdz"<<endl;
    cout<<"7-wyczysc ekran"<<endl;
    cin>>wybor;
    
    
    switch(wybor)
    {
        case 1: 
        cout<<"Podaj liczbe wierszy"<<endl;
        cin>>ilosc_wierszy;
        cout<<"Podaj liczbe kolumn"<<endl;
        cin>>ilosc_kolumn;
        macierz = tworzenie_tablicy(ilosc_wierszy,ilosc_kolumn);
        
        break;
        
        case 2: 
        wyswietl_tab(macierz,ilosc_wierszy,ilosc_kolumn);
        break;
        
        case 3: 
        cout<<"Zapisywanie na dysk"<<endl;
        zapis(plik1,macierz,ilosc_wierszy,ilosc_kolumn);
        break;
        
        case 4:
        cout<<"Odczyt z dysku"<<endl;
        arkusz = odczyt(plik2,wiersze,kolumny);
        wyswietl_tab(arkusz,wiersze,kolumny);
        break;
        
        case 5:
        zmiana_wartosci(macierz,numer_wiersza, numer_kolumny);
        break;
        case 6:
        system("clear");
        
        
        case 7:
        system("clear");

        
        default:
        cout<<"Podaj odpowiednia liczbe"<<endl;
        system("clear");
        break;
        
    }
    }
    while(wybor != 6);
}
