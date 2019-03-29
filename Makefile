run: all
	./NQueen
all: main.o
	g++ main.o solver.o solveMethod.o hillclimbingmethod.o game.o nqueenboard.o board.o cell.o cor.o -o NQueen -Wall -g -O2 -std=c++11
main.o: game.o hillclimbingmethod.o solver.o main.cpp
	g++ -c main.cpp
game.o: cor.o nqueenboard.o game.h game.cpp
	g++ -c game.cpp
cor.o: cor.h cor.cpp
	g++ -c cor.cpp
nqueenboard.o: cor.o board.o nqueenboard.h nqueenboard.cpp
	g++ -c nqueenboard.cpp
solvemethod.o: game.o solveMethod.h solveMethod.cpp 
	g++ -c solveMethod.cpp 
solver.o: solvemethod.o game.o solver.h solver.cpp
	g++ -c solver.cpp 
board.o: cell.o board.h board.cpp
	g++ -c board.cpp
hillclimbingmethod.o: solveMethod.o hillclimbingmethod.h hillclimbingmethod.cpp
	g++ -c hillclimbingmethod.cpp 
cell.o: cell.h cell.cpp
	g++ -c cell.cpp 
open:
	code main.cpp game.h game.cpp board.h board.cpp solver.h solver.cpp solveMethod.h solveMethod.cpp cell.h cell.cpp Makefile
clean:
	rm -rf *.o NQueen
