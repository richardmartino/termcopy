/*
 * termcopy by Richard Martino
 * Written in C++, compiled with GCC. Cross Platform by nature.
 * A program to take terminal output and put it in your clipboard.
*/

#include <iostream>

using namespace std;

int main(int token, char* str[]){
	cin >> *str;
	for(int i=1;i<(int)(sizeof(*str));i++){
	cout << *str[i];
	}
}


