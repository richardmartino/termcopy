#makefile for termcopy
#by Richard Martino

termcopy: termcopy.cpp
	g++ -Wall -Wextra termcopy.cpp -o bin/termcopy
