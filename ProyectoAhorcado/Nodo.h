#pragma once
#include "Player.h"
#include <iostream>
class Nodo
{
private:
	Nodo * next;
	Player * myPlayer;
public:
	Nodo(Player*);
	~Nodo();
	void setNext(Nodo *);
	void setPlayer(Player *);
	Nodo * getNext();
	Player * getMyPlayer();
};

