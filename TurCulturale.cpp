#include "TurCulturale.h"

void TurCulturale::addParticipant(Participanti p)
{
	_participanti.push_back(p);
}

TurCulturale::TurCulturale(string tip, string ghid)
{
	this->_tip = tip;
	this->_ghid = ghid;
}
