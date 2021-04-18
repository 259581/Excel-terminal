# Projekt arkusza kalkulacyjnego 
## interfejs:
		-komunikacja z użytkownikiem
		-wydawanie poleceń programowi
		-wywoływanie funkcji		
## arkusz:
		-stworzenie nowego arkusza
			int ** tworzenie_tablicy(int ilosc_wierszy, int ilosc_kolumn);
		
		-regulacja wielkości tablicy
			double **aktualizacja_rozmiaru(double **macierz, int nlw, int nlk, int ilosc_wierszy, int ilosc_kolumn);
			
		-aktualizacja zawartości poszczególnych komórek
			void zmiana_wartosci(double **macierz, int numer_wiersza, int numer_kolumny, double a);
## pliki:
		-zapis arkusza do pliku tekstowego
			void zapis(double **arkusz, int ilosc_wierszy, int ilosc_kolumn, string nazwa_pliku);
		
		-odczyt arkusza z pliku tekstowego 
			double** odczyt(int *w, int *k, std::string nazwa_pliku);	
		
			
		
