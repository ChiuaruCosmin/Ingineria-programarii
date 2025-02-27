#pragma once
#include <string>
using namespace std;
class Participanti
{
public:
	string _nume;
	int _varsta;

	Participanti(string nume, int varsta);
	string getName();
	string getVarsta();
};

