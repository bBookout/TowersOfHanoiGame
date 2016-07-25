// TowersOfHanoi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int myMoves(0);
void MakeMoves(int n, char a, char b, char c);

void MakeMoves(int n, char a, char b, char c){
	myMoves++;
	if (n == 1){
		cout << "Move disc " << n << " from " << a << " to " << c << endl;
	}
	else{
		MakeMoves(n - 1, a, c, b);
		cout << "Move disc " << n << " from " << a << " to " << c << endl;
		MakeMoves(n - 1, b, a, c);
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int discs;

	cout << "\n\t **************   TOWERS OF HANOI   **************\n" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "\tEnter the number of discs for the game: " << endl;
	cin >> discs;
	MakeMoves(discs, 'A', 'B', 'C');
	cout << "It took " << myMoves << " moves to complete the game. " << endl;
	cout << "\n\t *************************************************\n";
	system("pause");
}

