/// @file
#ifndef TABLICA_H_INCLUDED
#define TABLICA_H_INCLUDED

/**
 * \brief To funkcja służąca do tworzenia arkusza. 
 * @param[in,out] arr - tablica dwuwymiarowa
 * @param[in] ilosc_wierszy - ilość wierszy
 * @param[in] ilosc_kolumn - ilość kolumn
 */
int ** tworzenie_tablicy(int ilosc_wierszy, int ilosc_kolumn);
/**
 * \brief Ta funkcja zmienia wartość poszczególnych komórek.
 * @param[in] macierz - tablica dwuwymiarowa
 * @param[in] numer_wiersza - numer wiersza, w którym chcemy zmienić wartość
 * @param[in] numer_kolumny - numer kolumny, w której chcemy zmienić wartość
 */
void zmiana_wartosci(int **macierz, int numer_wiersza, int numer_kolumny);
#endif