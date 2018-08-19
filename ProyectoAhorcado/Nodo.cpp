#include "Nodo.h"



Nodo::Nodo(Player * player)
{
	setNext(NULL);
	setPlayer(player);


}


Nodo::~Nodo()
{
}


void Nodo:: setNext(Nodo * nex)
{
	next = next;
}
void Nodo:: setPlayer(Player * player)
{
	myPlayer = player;
}
Nodo * Nodo:: getNext()
{
	return next;
}
Player * Nodo:: getMyPlayer()
{
	return myPlayer;
}