#pragma once
#include <vector>
#include <string>
#include "Participanti.h"
using namespace std;
class Tur
{ 

public:
	virtual void addParticipant(Participanti p) const = 0;
};   