#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

using namespace std;

class Human: public Player{
public:
	Human(); //default
	Human(int i, char c); // constructor
	Human(const Human& h); // copy constructor
	~Human(); // For testing purposes only
	
	void setPlayerPiece(char c);


};


#endif