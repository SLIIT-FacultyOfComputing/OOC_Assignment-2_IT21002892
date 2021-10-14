#include <cstring>
#include "UnregisteredUser.h"
using namespace std;

UnregisteredUser::UnregisteredUser() {
	class UnregisteredUser {
		{
			PlayerID = 0;
			strcpy_s(PlayerName, " ");
			strcpy_s(PlayererEmail, " ");
			strcpy_s(PlayerUserName, " ");
			strcpy_s(PlayerPassword, "");

		}

		UnregisteredUser::UnregisteredUser(int pid, const char pname[], const char pmail[], const char uname[], const char pword[])

		{
			PlayerID = pid;
			strcpy_s(PlayerName, pname);
			strcpy_s(PlayerEmail, pmail);
			strcpy_s(PlayerUserName, uname);
			strcpy_s(PlayerPassword, pword);
		}

		void UnregisteredUser::regisration()

		{
		}
		void UnregisteredUser::cancelRegistration()
		{
		}
		UnregisteredUser:: ~UnregisteredUser()
		{
		}

	};
