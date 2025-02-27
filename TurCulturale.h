#pragma once
#include "Tur.h"
class TurCulturale :
    public Tur
{
private:
	string _tip;
	string _ghid;
	vector<Participanti> _participanti;
public:
	void addParticipant(Participanti p);
	TurCulturale(string tip, string ghid);

};

