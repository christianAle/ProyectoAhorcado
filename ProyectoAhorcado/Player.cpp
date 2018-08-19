#include "Player.h"



Player::Player(int recor)
{
	setRecord( recor);
}


Player::~Player()
{
}


void Player ::setRecord(int recor)
{
	record = recor;
}

int Player:: getRecord()
{
	return record;
}
