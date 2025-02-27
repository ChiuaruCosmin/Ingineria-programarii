#pragma once
#include "Tur.h"
class TurAventura :
    public Tur
{ 
private:
	string _tip;
	string _ghid;
	vector<Participanti> _participanti;
public:
	void addParticipant(Participanti p);
	TurAventura(string tip, string ghid);

};

