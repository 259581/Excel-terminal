/// @file
#ifndef TABLICA_H_INCLUDED
#define TABLICA_H_INCLUDED
/*!
  Klasa zawierająca dane oraz metody dotyczące pól wewnątrz arkusza.
  */
class Cell
{
  private:

  /**
   * @brief Pole zawierające wartości arkusza.
   */
  double poledouble;
  
  public:
  /**
   * @brief Metoda pobierająca wartośc pola double.
   * 
   * @return double - wartość pola Poledouble
   */
  double getDoubleValue();

  /**
   * @brief Metoda służąca do ustawiania wartości arkusza.
   * 
   * @param wartosc - wartość double, którą chcemy ustawić w arkuszu.
   * @return double - wartość double, którą chcemy ustawić w arkuszu.
   */
  double setDoubleValue(double wartosc);
};


/*!
  Klasa zawierająca parametry arkusza, arkusz oraz metody, które go modyfikują.
 */
class Arkusz 
{
 
  private:

  /**
   * @brief rozmiar(kolumny)
   */
  int ilosc_kolumn;

  /**
   * @brief rozmiar(wiersze)
   */
  int ilosc_wierszy;

  /**
   * @brief obiekt klasy Cell(arkusz)
   */
  Cell** macierz;

  /**
 * \brief To funkcja służąca do tworzenia arkusza. 
 * @param[in] ilosc_wierszy - ilość wierszy
 * @param[in] ilosc_kolumn - ilość kolumn
 * @return arkusz - obiekt klasy Cell
 */
  Cell** tworzenie_tablicy(int wiersze, int kolumny);

  /**
 * @brief Ta funkcja służy do wyzerowania wartości arkusza.
 */
  Cell** zerowanie_tablicy();

  /**
 * \brief To funkcja służąca do zmieniania wielkosci tablicy(arkusza).
 * @param[in] w - ilość wierszy, którą będzie mieć zmodyfikowana tablica
 * @param[in] k - ilość kolumn, którą będzie mieć zmodyfikowana tablica
 * @return arkusz - zmodyfikowa obiekt klasy Cell
 */
  Cell** aktualizacja_rozmiaru(int w, int k);

  /**
 * \brief Ta funkcja kopiuje tablice(arkusze).
 * @param[in,out] macierz_wyj - obiekt klasy Cell(arkusz)
 * @param[in] macierz_wej - obiekt klasy Cell(arkusz)
 * @param[in] w - ilosc wierszy jaka ma być skopiowana
 * @param[in] k - ilosc kolumn jaka ma być skopiowana
 */
  void kopiowanie(Cell **macierz_wej,Cell** macierz_wyj, int w, int k);

  public:

 /**
 * \brief Ta funkcja zmienia wartość poszczególnych komórek.
 * @param[in] w- numer wiersza, w którym chcemy zmienić wartość
 * @param[in] k - numer kolumny, w której chcemy zmienić wartość
 * @param[in] a - wartość, którą chcemy wstawić do konkretnej komórki 
 * @return błąd - domyślnie zwraca wartość 0, która oznacza powodzenie, w przypadku niepowodzenia zwróci 1.
 */
  int zmiana_wartosci(int w, int k, double a);

  /**
 * @brief Ta funkcja służy do zapisu arkusza do pliku tekstowego.
 * @param[in] nazwa_pliku - plik, do którego zostanie zapisany arkusz
 * @return wartość 0 oznacza prawidłowo wykonaną operację, a wartość 1 oznacza błąd
 */
  int zapis(std::string nazwa_pliku);

  /**
 * @brief Ta funkcja służy do odczytu arkuszy z dysku, dokładnie z pliku tekstowego.
 * @param[in] nazwa_pliku - plik, z którego odczytamy arkusz
 * @return wartość 0 oznacza powodzenie, a wartość jeden oznacza błąd
 */
  int odczyt(std::string nazwa_pliku);

  /**
   * @brief Funkcja służąca do stworzenia nowej tablicy.
   * 
   * @param w - ilość wierszy 
   * @param k - ilość kolumn
   */
  void nowa_tablica(int w, int k);

  /**
 * \brief Funkcja służąca do wyświetlania arkusza. 
 */
  void wyswietl_tab();

  /**
   * @brief 
   * 
   * @param w - nowy rozmiar(wiersze)
   * @param k - nowy rozmiar(kolumny)
   */
  void zmiana_rozmiaru(int w,int k);
  
  /**
   * @brief Metoda sumująca wartość w konkretnym wierszu.
   * 
   * @param w - numer wiersza
   * @return double - suma
   */
  double sumowanie_wierszy(int w);

  /**
   * @brief Metoda sumująca wartość w konkretnej kolumnie.
   * 
   * @param k - numer kolumny
   * @return double - suma
   */
  double sumowanie_kolumn(int k);

  /**
   * @brief Metoda znajdująca największą wartość w wierszu.
   * 
   * @param w -numer wiersza
   * @return double - największa wartość wiersza
   */
  double naj_wart_wiersza(int w);

  /**
   * @brief Metoda znajdująca największą wartość w kolumnie.
   * 
   * @param k - numer kolumny
   * @return double - największa wartość kolumny
   */
  double naj_wart_kolumny(int k);

  /**
   * @brief Metoda licząca średnia z kolumn lub wierszy.
   * 
   * @param z - numer kolumny/wiersza
   * @param d - decyzja(wiersze/kolumny)
   * @return double =średnią wartość
   */
  double srednia(int z, int d);
};

#endif