#include "Game.h"


class UnregisteredUser
{
private:
	//Class Relationship
	Game* game;

protected:
	int PlayerID;
	char PlayerName[30];
	char PlayerEmail[50];
	char PlayerUserName[10];
	char PlayerPassword[10];
public:
	UnregisteredUser();
	UnregisteredUser(int pid, const char pname[], const char pmail[], const char uname[], const char pword[]);
	void regisration();
	void cancelRegistration();
	~UnregisteredUser();
};
