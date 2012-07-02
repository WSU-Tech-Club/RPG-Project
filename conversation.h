#pragma once

#include "SocialNpc.h"
const int MAXRESPONSES = 5;

class Topic
{
public:
	Topic();
	~Topic();
	void setTopic(string nSpeak, string nResponses[MAXRESPONSES], bool nIsResponse[MAXRESPONSES]);
	string getResponse(int choice);	//returns raw responce to the choice
	string speak();//returns speach


private:
	string speech;//contains the npc side of the conversation -
	//J: an entire conversation in one string?
	string RESPONSES[MAXRESPONSES];// contains raw responce string
	bool isResponse[MAXRESPONSES];//set false be default
};

class Conversation
{
	friend class Topic;

public:
	Conversation();	
	~Conversation();

	string stringPasser(string pass);//sends a string up

private:
	Topic currentTopic[20];
};



