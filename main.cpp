#include <iostream>
#include "tablica.h"
#include "menu.h"
#include "tablica_wysw.h"
#include <cstdlib>
#include <stdlib.h>
#include "pliki.h"

using namespace std;

int main()
{
   p_a arkusz;
   arkusz.macierz = 0;
   arkusz.ilosc_wierszy = 0;
   arkusz.ilosc_kolumn = 0;
   wyswietl_menu(arkusz);
   
}