#include <iostream>
#include <string>
#include "population.h"

using namespace std;


string initializeRunes();
int randomNumber(string runes);

int main(int argc, char const *argv[])
{

	Population pop(50);

	cout <<  sizeof(pop) << endl;

	cout << "Population size: " << pop.getPopSize() << endl;

	return 0;
}

int randomNumber(string runes){
	return rand() % runes.length() + 1;
}

string initializeRunes(){
	string runes = "abcdefghilmopqrstuvzABCDEFGHILMOPQRSTUVZ1234567890";
	return runes;
}
