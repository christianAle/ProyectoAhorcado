#pragma once

class Player
{
private:
	int record;
	
public:
	Player(int);
	~Player();
	void setRecord(int);
	int getRecord();
};

