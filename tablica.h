/// @file
#ifndef TABLICA_H_INCLUDED
#define TABLICA_H_INCLUDED

/**
 * \brief To funkcja służąca do tworzenia arkusza. 
 * @param[in] ilosc_wierszy - ilość wierszy
 * @param[in] ilosc_kolumn - ilość kolumn
 * @return tablica - tablica dwuwymiarowa(arkusz)
 */
double ** tworzenie_tablicy(int ilosc_wierszy, int ilosc_kolumn);
/**
 * \brief Ta funkcja zmienia wartość poszczególnych komórek.
 * @param[in,out] macierz - tablica dwuwymiarowa(arkusz)
 * @param[in] numer_wiersza - numer wiersza, w którym chcemy zmienić wartość
 * @param[in] numer_kolumny - numer kolumny, w której chcemy zmienić wartość
 */
void zmiana_wartosci(double **macierz, int numer_wiersza, int numer_kolumny, double a);
/**
 * \brief To funkcja służąca do zmieniania wielkosci tablicy(arkusza).
 * @param[in] nlw - ilość wierszy, którą będzie mieć zmodyfikowana tablica
 * @param[in] nlk - ilość kolumn, którą będzie mieć zmodyfikowana tablica
 * @param[in] slw - ilość wierszy, którą miała tablica przed modyfikacja
 * @param[in] slk - ilość kolumn, którą miała tablica przed modyfikacja
 * @return tablica - zmodyfikowa tablica(arkusz)
 */
double **aktualizacja_rozmiaru(double **macierz, int nlw, int nlk, int slw, int slk);
/**
 * \brief Ta funkcja kopiuje tablice(arkusze).
 * @param[in,out] macierz1 - tablica dwuwymiarowa(arkusz)
 * @param[in,out] macierz2 - tablica dwuwymiarowa(arkusz)
 * @param[in] ilosc_wierszy - ilosc wierszy jaka ma być skopiowana
 * @param[in] numer_kolumny - ilosc kolumn jaka ma być skopiowana
 */
void kopiowanie(double **macierz1, double **macierz2, int ilosc_wierszy, int ilosc_kolumn);
#endif