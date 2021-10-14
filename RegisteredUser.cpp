#include "RegisteredUser.h"
#include <cstring>"

RegisteredUser::RegisteredUser()
{
	strcpy_s(PlayerUserName, " ");
	strcpy_s(PlayerPassword, " ");
}
RegisteredUser::RegisteredUser(const char uname[25], const char ppwd[8])
{
	strcpy_s(PlayerUserName, uname);
	strcpy_s(PlayerPassword, ppwd);
}
void RegisteredUser::login()
{
}
void RegisteredUser::passwordvalidation()
{
}
void RegisteredUser::logout()
{
}
RegisteredUser::~RegisteredUser()
{
}
