/// @file
#ifndef TABLICA_H_INCLUDED
#define TABLICA_H_INCLUDED
/*!
  Klasa zawierająca dane oraz metody dotyczące pól wewnątrz arkusza.
  */
class Cell
{     
 
   public:
  /**
   * @brief Metoda wirtualna zwracająca informację o rodzaju kolumny.
   * 
   * @return true - kolumna ze zmiennymi typu string
   * @return false - kolumna ze zmiennymi typu double
   */
  virtual bool getKol()=0;
  
  /**
   * @brief Metoda wirtulna pobierająca wartośc pól.
   * 
   * @return string - przekonwertowaną wartość "poledouble".
   */
  virtual std::string getValue()=0;
  

  /**
   * @brief Metoda wirtualna służąca do ustawiania wartości arkusza.
   * 
   * @param string - zmienna typu string
   */
  virtual void setValue(std::string)=0;
};

/*!
  KLasa zwierająca pola i metody odpowiadające jednej komórce typu string
  */
class Cellstring: public Cell
{
  /**
   * @brief Zmienna typu string, która odpowiada jednej komórce arkusza.
   * 
   */
  std::string polestring = "*";

public:
  
  /**
   * @brief Metoda odpowiadająca za ustawienie wartości w komórce.
   * @param string - zmienna typu string
   */
  void setValue(std::string);
  
  /**
   * @brief Metoda, która zwraca wartość komórki.
   * 
   * @return std::string 
   */
  std::string getValue();
  
  /**
   * @brief Metoda zwracająca informacje o typie zmiennej jaki aktualnie komórka przechowuje.
   * 
   * @return true - typ string 
   */
  bool getKol();
  };

class Celldouble: public Cell
{
  
  /**
   * @brief Zmienna typu double, która odpowiada jednej komórce arkusza.
   * 
   */
  double poledouble = 0;
public:
  
  /**
   * @brief Metoda odpowiadająca za ustawienie wartości w komórce.
   * @param string - zmienna typu string, która jest konwertowana na zmienną typu double.
   */
  void setValue(std::string);
  
  /**
   * @brief Metoda, która zwraca wartość komórki.
   * 
   * @return std::string 
   */
  std::string getValue();
  
  /**
   * @brief Metoda zwracająca informacje o typie zmiennej jaki aktualnie komórka przechowuje.
   * 
   * @return false - typ double
   */
  bool getKol();
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
   * @brief Potrójny wskaźnik do obiektu klasy Cell(arkusz)
   */
  Cell*** macierz;

  /**
 * \brief To funkcja służąca do tworzenia arkusza. 
 * @param[in] ilosc_wierszy - ilość wierszy
 * @param[in] ilosc_kolumn - ilość kolumn
 * @param[in] typk - informacja o rodzaju kolumny
 * @return arkusz - potrójny wskaźnik do obiektu klasy Cell
 */
  Cell*** tworzenie_tablicy(int wiersze, int kolumny, int* typk);

 
  
  /**
 * \brief To funkcja służąca do zmieniania wielkosci tablicy(arkusza).
 * @param[in] w - ilość wierszy, którą będzie mieć zmodyfikowana tablica
 * @param[in] k - ilość kolumn, którą będzie mieć zmodyfikowana tablica
 * @param[in] tk - informacja o rodzaju kolumny
 * @return arkusz - zmodyfikowa obiekt klasy Cell
 */
  Cell*** aktualizacja_rozmiaru(int w, int k, int* tk);

  /**
 * \brief Ta funkcja kopiuje tablice(arkusze).
 * @param[in,out] macierz_wyj - potrójny wskaźnik do obiektu klasy Cell(arkusz)
 * @param[in] macierz_wej - potrójny wskaźnik do obiektu klasy Cell(arkusz)
 * @param[in] w - ilosc wierszy jaka ma być skopiowana
 * @param[in] k - ilosc kolumn jaka ma być skopiowana
 */
  void kopiowanie(Cell ***macierz_wej,Cell*** macierz_wyj, int w, int k);

  public:


 
 /**
 * \brief Ta funkcja zmienia wartość poszczególnych komórek.
 * @param[in] w- numer wiersza, w którym chcemy zmienić wartość
 * @param[in] k - numer kolumny, w której chcemy zmienić wartość
 * @param[in] wartosc - wartość, którą chcemy wstawić do konkretnej komórki 
 * @return błąd - domyślnie zwraca wartość 0, która oznacza powodzenie, w przypadku niepowodzenia zwróci 1.
 */
  int zmiana_wartosci(int w, int k, std::string wartosc);

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
   * @param[in] w - ilość wierszy 
   * @param[in] k - ilość kolumn
   * @param[in] typk - informacja o rodzaju kolumn
   */
  void nowa_tablica(int w, int k, int* typk);

  /**
 * \brief Funkcja służąca do wyświetlania arkusza. 
 */
  void wyswietl_tab();

  /**
   * @brief 
   * 
   * @param[in] w - nowy rozmiar(wiersze)
   * @param[in] k - nowy rozmiar(kolumny)
   * @param[in] tk - informacja o rodzaju kolumn 
   */
  void zmiana_rozmiaru(int w,int k, int* tk);
  
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
   * @param num - numer kolumny/wiersza
   * @param decyzja - decyzja(wiersze/kolumny)
   * @return double =średnią wartość
   */
  double srednia(int num, std::string decyzja);

  /**
   * @brief Metoda pokazująca jakiego rodzaju są kolumny.
   * 
   * @param tk - informacja o rodzaju kolumn
   */
  void jakakolumna(int* tk);

  /**
   * @brief Metoda pobierająca informacje od użytkownika jakiego rodzaju maja powstać kolumny.
   * 
   * @param k 
   * @return int* - wskaźnik, tablica dynamiczna zawierająca informacje o typach kolumn. 
   */
  int* typkolumny(int k);
};

#endif