#include "PlayersList.h"



PlayersList::PlayersList()
{
	setHead(NULL);
}


PlayersList::~PlayersList()
{
}


void PlayersList:: setHead(Nodo* hea)
{
	head = hea;
}
Nodo * PlayersList:: getHead()
{
	return head;
}