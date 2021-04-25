/// @file
#ifndef PLIKI_H_INCLUDED
#define PLIKI_H_INCLUDED
/**
 * @brief Ta funkcja służy do zapisu arkusza do pliku tekstowego.
 * @param[in] arkusz - struktura
 * @param[in] nazwa_pliku - plik, do którego zostanie zapisany arkusz
 * @return wartość 0 oznacza prawidłowo wykonaną operację, a wartość 1 oznacza błąd
 */
int zapis(struct p_a arkusz, std::string nazwa_pliku);
/**
 * @brief Ta funkcja służy do odczytu arkuszy z dysku, dokładnie z pliku tekstowego.
 * @param[in,out] arkusz - wskaźnik do struktury
 * @param[in] nazwa_pliku - plik, z którego odczytamy arkusz
 */
int odczyt(struct p_a *arkusz, std::string nazwa_pliku);
#endif