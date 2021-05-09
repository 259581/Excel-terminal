git: main.o menu.o tablica.o tablica_wysw.o pliki.o
	g++ main.cpp menu.cpp tablica.cpp tablica_wysw.cpp pliki.cpp -o git
clean:
	rm -f git
