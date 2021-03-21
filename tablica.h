/// @file
#ifndef TABLICA_H_INCLUDED
#define TABLICA_H_INCLUDED
extern int **macierz;
extern int kolumny;
extern int wiersze;
/**
 * @param[in,out] arr - tablica dwuwymiarowa
 * @param[in] wiersze - numer wiersza
 * @param[in] kolumny - numer kolumny
 * @return - kod błędu lub 0 w przypadku powodzenia
 */
int ** tworzenie_tablicy(int wiersze, int kolumny);
void zmiana_wartosci(int **macierz, int wiersze, int kolumny);
#endif