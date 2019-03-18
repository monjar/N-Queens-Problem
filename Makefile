run: all
	./NQueen
all: main.o 
	g++ main.o board.o cell.o -o NQueen -Wall -g -O2 -std=c++11
main.o: board.o main.cpp
	g++ -c main.cpp
board.o: cell.o board.h board.cpp
	g++ -c board.cpp
cell.o: cell.h cell.cpp
	g++ -c cell.cpp
open:
	code main.cpp game.h game.cpp board.h board.cpp solver.h solver.cpp solveMethod.h solveMethod.cpp cell.h cell.cpp Makefile
clean:
	rm -rf *.o NQueen
