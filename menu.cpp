#include <iostream>
#include "menu.h"
#include "tablica_wysw.h"
#include "tablica.h"
#include <cstdlib>
#include <stdlib.h>
#include "pliki.h"
#include <fstream>
#include <string>
using namespace std;
int wybor;
void menu_tekst()
{
        cout<<"Co chcesz zrobic? Podaj odpowiednia liczbe."<<endl;
        cout<<"1-stworz nowa tablice"<<endl;
        cout<<"2-wyswietl tablice"<<endl;
        cout<<"3-zapisz na dysk"<<endl;
        cout<<"4-odczytaj z dysku"<<endl;
        cout<<"5-zmien wartosc w arkuszu"<<endl;
        cout<<"6-zmien rozmiar tablicy"<<endl;
        cout<<"7-wyczysc ekran"<<endl;
        cout<<"8-wyjdz"<<endl;
        cin>>wybor;
}
void wyswietl_menu()
{
    
    double **macierz;
    int ilosc_kolumn = 0;
    int ilosc_wierszy = 0;
    int numer_wiersza = 0;
    int numer_kolumny = 0;
    int nlw = 0;    //nowa liczba wierszy
    int nlk = 0;    //nowa liczba kolumn   
    double a=0;
    int *w = &ilosc_wierszy;
    int *k = &ilosc_kolumn;
    string nazwa_pliku;
    do{
        menu_tekst();
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
                cout<<"Podaj nazwe pliku bez rozszerzenia, do ktorego chcesz zapisac arkusz"<<endl;
                cin>>nazwa_pliku;
                zapis(macierz,ilosc_wierszy,ilosc_kolumn,nazwa_pliku);
            break;
            
            case 4:
                cout<<"Odczyt z dysku"<<endl;
                cout<<"Podaj nazwe pliku bez rozszerzenia, z ktorego chcesz odczytac arkusza"<<endl;
                cin>>nazwa_pliku;
                macierz = odczyt(w, k, nazwa_pliku);
                
                
            break;
            
            case 5:
                
                cout<<"Jaka wartosc chcesz wprowadzic?"<<endl;
                cin>>a;
                cout<<"Podaj numer wiersza"<<endl;
                cin>>numer_wiersza;
                cout<<"Podaj numer kolumny"<<endl;
                cin>>numer_kolumny;
                zmiana_wartosci(macierz,numer_wiersza, numer_kolumny, a);
            break;
            
            case 6:
                
                
                cout<<"Podaj nowa wielkosc arkusza"<<endl;
                cout<<"Najpierw liczba wieszy:"<<endl;
                cin>>nlw;
                cout<<"Teraz liczba kolumn:"<<endl;
                cin>>nlk;
                macierz = aktualizacja_rozmiaru(macierz, nlw, nlk, ilosc_wierszy, ilosc_kolumn);
                ilosc_wierszy = nlw;
                ilosc_kolumn = nlk;
                
                break;
            
            case 7:
                system("clear");
                break;
            
            case 8:
                system("clear");
                break;
            
            default:
            cout<<"Podales zla liczbe, podaj ponownie"<<endl;
            
        }
    }
    while(wybor != 8);
}
