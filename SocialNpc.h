#pragma once

#include "SocialController.h"

class SocialNpc
{
	friend class Action;
public:
	SocialNpc();
	~SocialNpc();//will store in temp/npc wehn they are not in the room.
	void GiveLife(string Filename);// this will shape an npc.
	Action Death();// this will be responible from killing them in the game 
	


private:
	Opinon npcOpinon;
	Personality npcPersonality;
	string fileName;
	Conversation currentConversation;
};
