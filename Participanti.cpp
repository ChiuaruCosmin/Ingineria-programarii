#include "Participanti.h"

Participanti::Participanti(string nume, int varsta)
{
	this->_nume = nume;
	this->_varsta = varsta;
}

string Participanti::getName()
{
	return this->_nume;
}

string Participanti::getVarsta()
{
	return this->_varsta;
}
