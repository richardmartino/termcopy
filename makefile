#makefile for termcopy
#by Richard Martino

termcopy: termcopy.cpp
	g++ -Wall -Wextra -Werror termcopy.cpp -o bin/termcopy.o
