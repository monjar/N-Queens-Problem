run: all
	./NQueen
all: main.o
	g++ main.o game.o board.o celltest.o cor.o -o NQueen -Wall -g -O2 -std=c++11
main.o: game.o main.cpp
	g++ -c main.cpp
game.o: cor.o board.o game.h game.cpp
	g++ -c game.cpp
cor.o: cor.h cor.cpp
	g++ -c cor.cpp 
board.o: celltest.o board.h board.cpp
	g++ -c board.cpp
celltest.o: celltest.h celltest.cpp
	g++ -c celltest.cpp 
open:
	code main.cpp game.h game.cpp board.h board.cpp solver.h solver.cpp solveMethod.h solveMethod.cpp cell.h cell.cpp Makefile
clean:
	rm -rf *.o NQueen
