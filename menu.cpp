#include <iostream>
#include "menu.h"
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
        cout<<"8-dzialania matematyczne"<<endl;
        cout<<"9-wyjdz"<<endl;
        cin>>wybor;
}
void wyswietl_menu(Arkusz arkusz)
{
    int w = 0; //wiersze
    int k = 0; //kolumny
    int wybor2;
    int err_change_value = 0;
    int err_add_value = 0;
    int err_file_save = 0;
    int err_file_read = 0;
    int err_liczenie_sredniej = 0;
    double a=0;
    char d;
    int z = 0;
    string nazwa_pliku;
    do
    {
        menu_tekst();
        switch(wybor)
        {
            case 1: 
                cout<<"Podaj ilosc wierszy:";
                cin>>w;
                cout<<endl;
                cout<<"Podaj ilosc kolumn:";
                cin>>k;
                arkusz.nowa_tablica(w, k);
                system("clear");
            break;
         
            case 2: 
                arkusz.wyswietl_tab();
            break;
            
            case 3: 
                cout<<"Podaj nazwe pliku bez rozszerzenia, do ktorego chcesz zapisac arkusz"<<endl;
                cin>>nazwa_pliku;
                err_file_save = arkusz.zapis(nazwa_pliku);
                if(err_file_save==0)
                {
                    cout<<"operacja wykonana poprawnie"<<endl;
                }
                else
                {
                    cout<<"blad. operacja nie zostala wykonana"<<endl;
                    cout<<"err_file_save"<<endl;
                }
                
            break;
            
            case 4:
                cout<<"Podaj nazwe pliku bez rozszerzenia, z ktorego chcesz odczytac arkusza"<<endl;
                cin>>nazwa_pliku;
                err_file_read = arkusz.odczyt(nazwa_pliku);
                if(err_file_read==0)
                {
                    cout<<"operacja wykonana poprawnie"<<endl;
                }
                else
                {
                    cout<<"blad. operacja nie zostala wykonana"<<endl;
                    cout<<"err_file_save"<<endl;
                }
                
                
            break;
            
            case 5:
                
                cout<<"Jaka wartosc chcesz wprowadzic?"<<endl;
                cin>>a;
                cout<<"Podaj numer wiersza"<<endl;
                cin>>w;
                cout<<"Podaj numer kolumny"<<endl;
                cin>>k;
                err_change_value = arkusz.zmiana_wartosci(w, k, a);
                if(err_change_value==0)
                {
                    cout<<"Powodzenie!"<<endl;
                }
                else
                {
                    cout<<"niepowodzenie"<<endl;
                    cout<<"err_change_value"<<endl;
                }
                
            break;
            
            case 6:
                
                
                cout<<"Podaj nowa wielkosc arkusza"<<endl;
                cout<<"Najpierw liczba wieszy:"<<endl;
                cin>>w;
                cout<<"Teraz liczba kolumn:"<<endl;
                cin>>k;
                arkusz.zmiana_rozmiaru(w,k);
                
                break;
            
            case 7:
                system("clear");
                break;
          
            case 8:
                cout<<"Co chcesz zrobic?"<<endl;
                cout<<"1.Sumowanie wedlug wierszy"<<endl;
                cout<<"2.Sumowanie wedlug kolumn"<<endl;
                cout<<"3.Najwieksza wartosc w wierszu"<<endl;
                cout<<"4.Najmniejsza wartosc w kolumnie"<<endl;
                cout<<"5.Srednia wartosc wiersza/kolumny"<<endl;
                cin>>wybor2;
                switch(wybor2)
                {
                    case 1:
                    cout<<"Który wiersz chcesz zsumować?"<<endl;
                    cin>>w;
                    a = arkusz.sumowanie_wierszy(w);
                    cout<<"Wynik sumowania wiersza nr "<<w<<" to "<<a<<endl;
                    break;

                    case 2:
                    cout<<"Która kolumne chcesz zsumować?"<<endl;
                    cin>>k;
                    a = arkusz.sumowanie_kolumn(k);
                    cout<<"Wynik sumowania kolumny nr "<<k<<" to "<<a<<endl;
                    break;

                    case 3:
                    cout<<"Podaj numer wiersza"<<endl;
                    cin>>w;
                    a = arkusz.naj_wart_wiersza(w);
                    cout<<"Najwieksza wartosc wiersza nr "<<w<<" to "<<a<<endl;
                    break;

                    case 4:
                    cout<<"Podaj numer kolumny"<<endl;
                    cin>>k;
                    a = arkusz.naj_wart_kolumny(k);
                    cout<<"Najwieksza wartosc kolumny nr "<<k<<" to "<<a<<endl;
                    break;

                    case 5:
                    cout<<"Chcesz policzyc srednia wartosc wiersza czy kolumny?"<<endl;
                    cout<<"w/k:";
                    cin>>d;
                    cout<<endl;
                    cout<<"Podaj numer:";
                    cin>>z;
                    cout<<endl;
                    a = arkusz.srednia(z,d);
                    if(d = 'w')
                    {
                        cout<<"Srednia wartosc wiersza nr "<<z<<" to "<<a<<endl;
                    }
                    else if(d = 'k')
                    {
                        cout<<"Srednia wartosc kolumny nr "<<z<<" to "<<a<<endl;
                    }
                    
                    
                    break;
                }
                break;
                
            case 9:
                system("clear");
                break;
            default:
                cout<<"Podales zla liczbe, podaj ponownie"<<endl;
            
        }
    }
    while(wybor != 9);
}
