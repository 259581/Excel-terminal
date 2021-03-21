/// @file
#ifndef TABLICA_H_INCLUDED
#define TABLICA_H_INCLUDED
/**
 * @param[in,out] arr - tablica dwuwymiarowa
 * @param[in] wiersze - numer wiersza
 * @param[in] kolumny - numer kolumny
 * @return - kod błędu lub 0 w przypadku powodzenia
 */
int ** tworzenie_tablicy(int wiersze, int kolumny);
void usuwanie(int **macierz);
#endif