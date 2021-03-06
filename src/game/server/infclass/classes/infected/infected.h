#ifndef GAME_SERVER_INFCLASS_CLASSES_INFECTED_H
#define GAME_SERVER_INFCLASS_CLASSES_INFECTED_H

#include "../infcplayerclass.h"

class CInfClassInfected : public CInfClassPlayerClass
{
public:
	CInfClassInfected();

	bool IsHuman() const final { return false; }

	void OnCharacterSpawned() override;
};

#endif // GAME_SERVER_INFCLASS_CLASSES_INFECTED_H
