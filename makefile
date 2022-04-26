all: dictionaries

dictionaries: main.o
	g++ -o dictionaries main.o

main.o: main.cpp Entry.h ArrayDictionary.h
	g++ -c main.cpp

clean:
	rm *.o dictionaries