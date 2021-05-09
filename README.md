# Projekt arkusza kalkulacyjnego 
## interfejs:
		-komunikacja z użytkownikiem
		-wydawanie poleceń programowi
		-wywoływanie funkcji		
## arkusz:
		-stworzenie nowego arkusza
			int ** tworzenie_tablicy(int ilosc_wierszy, int ilosc_kolumn);
		
		-regulacja wielkości tablicy
			double **aktualizacja_rozmiaru(int nlw, int nlk);
			
		-aktualizacja zawartości poszczególnych komórek
			int zmiana_wartosci(int numer_wiersza, int numer_kolumny, double a);
		-liczenie średniej z konkretnych liczb
			int liczenie_sredniej(int numer_wiersza, int numer_kolumny, double suma, int ilosc_liczb);
## klasa
		-klasa p_a na podstawie, której opiera się działanie programu
		-został stworzony obiekt "arkusz"	
			p_a arkusz;
## pliki:
		-zapis arkusza do pliku tekstowego
			void zapis(class p_a arkusz, std::string nazwa_pliku);
		
		-odczyt arkusza z pliku tekstowego 
			double** odczyt(class p_a *arkusz std::string nazwa_pliku);	
		
			
		
