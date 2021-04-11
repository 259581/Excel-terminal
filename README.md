# Projekt arkusza kalkulacyjnego 
## interfejs:
		-komunikacja z użytkownikiem
		-wydawanie poleceń programowi
		-wywoływanie funkcji		
## arkusz:
		-stworzenie nowego arkusza
			int ** tworzenie_tablicy(int ilosc_wierszy, int ilosc_kolumn);
		
		-regulacja wielkości tablicy
		
		-aktualizacja zawartości poszczególnych komórek
			void zmiana_wartosci(int **macierz, int numer_wiersza, int numer_kolumny);
## pliki:
		-zapis arkusza do pliku tekstowego
			void zapis(std::ofstream& plik1, int **arkusz, int ilosc_wierszy, int ilosc_kolumn);
		
		-odczyt arkusza z pliku tekstowego 
			int** odczyt(std::ifstream& plik2, int wiersze, int kolumny);	
		
			
		
