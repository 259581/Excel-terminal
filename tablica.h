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
 * @param[in,out] arkusz- struktura zawierajaca arkusz oraz ilosc jego wierszy i kolumn
 * @param[in] numer_wiersza - numer wiersza, w którym chcemy zmienić wartość
 * @param[in] numer_kolumny - numer kolumny, w której chcemy zmienić wartość
 * @return błąd - domyślnie zwraca wartość 0, która oznacza powodzenie, w przypadku niepowodzenia zwróci 1.
 */
int zmiana_wartosci(struct p_a arkusz, int numer_wiersza, int numer_kolumny, double a);
/**
 * \brief To funkcja służąca do zmieniania wielkosci tablicy(arkusza).
 * @param[in] nlw - ilość wierszy, którą będzie mieć zmodyfikowana tablica
 * @param[in] nlk - ilość kolumn, którą będzie mieć zmodyfikowana tablica
 * @param[in] slw - ilość wierszy, którą miała tablica przed modyfikacja
 * @param[in] slk - ilość kolumn, którą miała tablica przed modyfikacja
 * @param[in] macierz - tablica(arkusz) do modyfikacji
 * @return tablica - zmodyfikowa tablica(arkusz)
 */
double **aktualizacja_rozmiaru(double **macierz, int ilosc_wierszy,int ilosc_kolumn, int nlw, int nlk);  //zmienic nazwy macierzy
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
 * @param macierz - arkusz, na którym wykonywane są działania
 */
void dodawanie(double a, int numer_wiersza, int numer_kolumny, double **macierz);

/*!
  Structura zawierająca parametry arkusza oraz sam arkusz.
 */
struct p_a 
{
   
    int ilosc_kolumn;
    int ilosc_wierszy;
    double **macierz;
    
};

#endif