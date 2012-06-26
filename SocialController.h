#pragma once
//this will be the main class for the social and story classes of the game

#include"action.h"


class SocialController
{
public:
	SocialController();
	~SocialController();
	Action interact(string npcName, int day);// handles npc interactions
	void HandleNpcInteractions(Action nAction);


private:


};





//conversations
//appearance of npc's*
//story arch*
//social events
//social network*
//the story web
//your phone and contact list*
//-will need acces to a callendar class*
