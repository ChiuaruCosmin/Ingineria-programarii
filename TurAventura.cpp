#include "TurAventura.h"

void TurAventura::addParticipant(Participanti p)
{
	_participanti.push_back(p);
}

TurAventura::TurAventura(string tip, string ghid)
{
	this->_tip = tip;
	this->_ghid = ghid;
}
