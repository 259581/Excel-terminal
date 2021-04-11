/// @file
#ifndef PLIKI_H_INCLUDED
#define PLIKI_H_INCLUDED
/**
 * @brief Ta funkcja służy do zapisu arkusza do pliku tekstowego.
 * @param[in] arkusz - tablica dwuwymiarowa
 * @param[in] nazwa_pliku - plik, do którego zostanie zapisany arkusz
 * @param[in] arkusz - arkusz który zostanie zapisany
 * @param[in] ilosc_wierszy - ilość wierszy arkusza
 * @param[in] ilosc_kolumn - ilość kolumn arkusza
 */
void zapis(double **arkusz, int ilosc_wierszy, int ilosc_kolumn, std::string nazwa_pliku);
/**
 * @brief Ta funkcja służy do odczytu arkuszy z dysku, dokładnie z pliku tekstowego.
 * @param[out] arkusz - tablica dwuwymiarowa
 * @param[in] nazwa_pliku - plik, z którego odczytamy arkusz
 * @param[in] w - wskaźnik do zmiennej "ilość wierszy"
 * @param[in] k - wskaźnik do zmiennej "ilość kolumn"
 */
double** odczyt(int *w, int *k, std::string nazwa_pliku);
#endif