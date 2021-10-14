<<<<<<< HEAD
#include "UnregisteredUser.h"
#include "Game.h"
#include "Feedback.h"
#include "Payment.h"

#define SIZE 2

class RegisteredUser :public UnregisteredUser
{
private:
	//Class Relationship
	Game* game[SIZE];
	Feedback* feedback;
	Payment* payment[SIZE];
public:
	RegisteredUser();
	RegisteredUser(const char uname[25], const char ppwd[8]);
	void login();
	void passwordvalidation();
	void logout();
	~RegisteredUser();
};

=======
#include "UnregisteredUser.h"
#include "Game.h"
#include "Feedback.h"
#include "Payment.h"

#define SIZE 2

class RegisteredUser:public UnregisteredUser
{
private:
	//Class Relationship
	Game* game[SIZE];
	Feedback* feedback;
	Payment* payment[SIZE];
public:
	RegisteredUser();
	RegisteredUser(const char uname[25], const char ppwd[8]);
	void login();
	void passwordvalidation();
	void logout();
	~RegisteredUser();
};


>>>>>>> origin/master
