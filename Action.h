#pragma once

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::ios;
using namespace std;

#include "Personality.h"
#include "Opinon.h"

class Action
{

public:
	Action();
	~Action();
	virtual bool setAction();
	bool setNextAction(Action *pNext);

private:
	char actionType;//will be used by the interprator to dechipher the action.
	string fileName;//will be the /temp file acted upon.
	Action *nextAction; //set to null by default
};