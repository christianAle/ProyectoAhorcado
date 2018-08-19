#pragma once
#include "Nodo.h"
class PlayersList
{
private:
	Nodo * head;
public:
	PlayersList();
	~PlayersList();
	void setHead(Nodo*);
	Nodo * getHead();

};

