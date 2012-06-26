#pragma once

//this class will be how npc will comunicate back to the world. its purpose will be to contain actions to be acted out throughout the world.
//such as yelling in school might make your freinds want to not hang out with you or the school might call your house.

#include"action.h"

class npcAction :public Action
{
public:
	npcAction();
	~npcAction();
	virtual bool setAction(string fileName, Opinon nOpinon, Personality nPersonality);

private:


};