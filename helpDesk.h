//IT21194894
//Krithiga Balakrishnan

#pragma once
#include <iostream>
#include <cstring>
#include<iomanip>
#include<conio.h>
#include <cstdio>
#include "RegisteredUser.h"
#include "GuestUser.h"
#include <cstdio>
using namespace std;

//Inheritance relationship between GuestUser and RegisteredUser
class helpDesk : public RegisteredUser
{
private:
	string helpDeskId;

public:
	helpDesk();
	helpDesk(string hDId, string uId, string pWord, string rName, string rEmail);
	void checkInquiries();
	void solveInquiries();
	~helpDesk();
};

