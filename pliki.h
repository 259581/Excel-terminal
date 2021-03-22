/// @file
#ifndef PLIKI_H_INCLUDED
#define PLIKI_H_INCLUDED
/**
 * @param[in] arkusz - tablica dwuwymiarowa
 * @param[in] plik1 - plik, do którego zostanie zapisany arkusz
 * @param[in] macierz - arkusz który zostanie zapisany
 * @param[in] ilosc_wierszy - ilość wierszy arkusza
 * @param[in] ilosc_kolumn - ilość kolumn arkusza
 */
void zapis(std::ofstream& plik1, int **arkusz, int ilosc_wierszy, int ilosc_kolumn);
/**
 * @param[out] arkusz - tablica dwuwymiarowa
 * @param[in] plik2 - plik, z którego odczytamy arkusz
 * @param[in] ilosc_wierszy - ilość wierszy arkusza
 * @param[in] ilosc_kolumn - ilość kolumn arkusza
 */
int** odczyt(std::ifstream& plik2, int wiersze, int kolumny);
#endif