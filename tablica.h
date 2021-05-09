/// @file
#ifndef TABLICA_H_INCLUDED
#define TABLICA_H_INCLUDED

/**
 * \brief To funkcja służąca do tworzenia arkusza. 
 * @param[in] ilosc_wierszy - ilość wierszy
 * @param[in] ilosc_kolumn - ilość kolumn
 * @return tablica - tablica dwuwymiarowa(arkusz)
 */
double **tworzenie_tablicy(int ilosc_wierszy, int ilosc_kolumn);
/**
 * \brief Ta funkcja zmienia wartość poszczególnych komórek.
 * @param[in] numer_wiersza - numer wiersza, w którym chcemy zmienić wartość
 * @param[in] numer_kolumny - numer kolumny, w której chcemy zmienić wartość
 * @param[in] a - wartość, którą chcemy wstawić do konkretnej komórki 
 * @return błąd - domyślnie zwraca wartość 0, która oznacza powodzenie, w przypadku niepowodzenia zwróci 1.
 */
int zmiana_wartosci(int numer_wiersza, int numer_kolumny, double a);
/**
 * \brief To funkcja służąca do zmieniania wielkosci tablicy(arkusza).
 * @param[in] nlw - ilość wierszy, którą będzie mieć zmodyfikowana tablica
 * @param[in] nlk - ilość kolumn, którą będzie mieć zmodyfikowana tablica
 * @return tablica - zmodyfikowa tablica(arkusz)
 */
 double **aktualizacja_rozmiaru(int nlw, int nlk);
/**
 * \brief Ta funkcja kopiuje tablice(arkusze).
 * @param[in,out] macierz_wyj - tablica dwuwymiarowa(arkusz)
 * @param[in] macierz_wej - tablica dwuwymiarowa(arkusz)
 * @param[in] ilosc_wierszy - ilosc wierszy jaka ma być skopiowana
 * @param[in] numer_kolumny - ilosc kolumn jaka ma być skopiowana
 */
void kopiowanie(double **macierz_wyj, double **macierz_wej, int ilosc_wierszy, int ilosc_kolumn);
/**
 * @brief Ta funkcja służy do wyzerowania istniejącego już arkusza.
 * 
 * @param[in,out] macierz - arkusz
 * @param ilosc_wierszy - ilość wierszy w arkuszu
 * @param ilosc_kolumn - ilość kolumn w arkuszu
 */
void zerowanie_tablicy(double **macierz, int ilosc_wierszy, int ilosc_kolumn);
/**
 * @brief Funkcja służąca do dodawania wartości do komórek.
 * 
 * @param a - wartość dodawana
 * @param numer_wiersza - numer wiersza
 * @param numer_kolumny - numer komórki
 * @return błąd - domyślnie zwraca wartość 0, która oznacza powodzenie, w przypadku niepowodzenia zwróci 1.
 */
int dodawanie(int numer_wiersza, int numer_kolumny, double a);
/**
 * @brief Funkcja służąca do liczenia średniej wartości z podanych liczb.
 * 
 * @param numer_wiersza -numer wiersza
 * @param numer_kolumny - numer kolumny
 * @param suma - suma podanych liczb
 * @param ilosc_liczb - ilość podanych liczb
 * @return błąd - domyślnie zwraca wartość 0, która oznacza powodzenie, w przypadku niepowodzenia zwróci 1.
 */
int liczenie_sredniej(int numer_wiersza, int numer_kolumny, double suma, int ilosc_liczb);
/*!
  Klasa zawierająca parametry arkusza, arkusz oraz metody, które go modyfikują.
 */
class p_a 
{
  /*
  private:
  int ilosc_kolumn;
  int ilosc_wierszy;
  double **macierz;
  */
  public:
  int zmiana_wartosci(int numer_wiersza, int numer_kolumny, double a);
  double **aktualizacja_rozmiaru(int nlw, int nlk);
  int dodawanie(int numer_wiersza, int numer_kolumny, double a);
  int liczenie_sredniej(int numer_wiersza, int numer_kolumny, double suma, int ilosc_liczb);
  int zapis(std::string nazwa_pliku);
  int odczyt(std::string nazwa_pliku);
  int ilosc_kolumn;
  int ilosc_wierszy;
  double **macierz;

  
    
};

#endif