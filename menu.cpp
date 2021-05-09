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
        cout<<"8-dodaj wartosc do komorki"<<endl;
        cout<<"9-wyjdz"<<endl;
        cout<<"0-policz srednia"<<endl;
        cin>>wybor;
}
void wyswietl_menu(p_a arkusz)
{
    char decyzja;
    double suma;
    int numer_wiersza = 0;
    int numer_kolumny = 0;
    int err_change_value = 0;
    int err_add_value = 0;
    int err_file_save = 0;
    int err_file_read = 0;
    int err_liczenie_sredniej = 0;
    int b = 0;
    int k = 0;
    int nlw = 0;    //nowa liczba wierszy
    int nlk = 0;    //nowa liczba kolumn   
    double a=0;
    string nazwa_pliku;
    do
    {
        menu_tekst();
        switch(wybor)
        {
            case 1: 
                cout<<"Podaj liczbe wierszy"<<endl;
                cin>>arkusz.ilosc_wierszy;
                cout<<"Podaj liczbe kolumn"<<endl;
                cin>>arkusz.ilosc_kolumn;
                arkusz.macierz = tworzenie_tablicy(arkusz.ilosc_wierszy, arkusz.ilosc_kolumn);  
                
            break;
            
            case 2: 
                wyswietl_tab(arkusz);
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
                cin>>numer_wiersza;
                cout<<"Podaj numer kolumny"<<endl;
                cin>>numer_kolumny;
                err_change_value = arkusz.zmiana_wartosci(numer_wiersza, numer_kolumny, a);
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
                cin>>nlw;
                cout<<"Teraz liczba kolumn:"<<endl;
                cin>>nlk;
                arkusz.macierz = arkusz.aktualizacja_rozmiaru(nlw, nlk);
                arkusz.ilosc_wierszy = nlw;
                arkusz.ilosc_kolumn = nlk;
                
                break;
            
            case 7:
                system("clear");
                break;
            
            case 8:
                cout<<"Podaj liczbe jaka chcesz dodac:";
                cin>>a;
                cout<<"Podaj numer wiersza"<<endl;
                cin>>numer_wiersza;
                cout<<"Podaj numer kolumny"<<endl;
                cin>>numer_kolumny;
                err_add_value = arkusz.dodawanie(numer_wiersza, numer_kolumny, a);
                if(err_add_value==0)
                {
                    cout<<"Powodzenie!"<<endl;
                }
                else
                {
                    cout<<"niepowodzenie"<<endl;
                    cout<<"err_add_value"<<endl;
                }
                break;
            case 9:
                system("clear");
                break;
            case 0:
                do
                {
                    cout<<"Podaj liczby z jakich ma byc obliczona srednia:";
                    k++;
                    cin>>a;
                    suma += a;
                    cout<<"Jeszcze jedna liczba?"<<endl;
                    cout<<"y/n"<<endl;
                    cin>>decyzja;
                } while (decyzja=='y');
                
                cout<<"Ktory wiersz?"<<endl;
                cin>>numer_wiersza;

                cout<<"Ktora kolumna?"<<endl;
                cin>>numer_kolumny;
                err_liczenie_sredniej = arkusz.liczenie_sredniej(numer_wiersza, numer_kolumny, suma, k);
                if(err_liczenie_sredniej==0)
                {
                    cout<<"Powodzenie!"<<endl;
                }
                else
                {
                    cout<<"niepowodzenie"<<endl;
                    cout<<"err_liczenie_sredniej"<<endl;
                }
                
                break;
            
            default:
                cout<<"Podales zla liczbe, podaj ponownie"<<endl;
            
        }
    }
    while(wybor != 9);
}
