//IT21194894
//Krithiga Balakrishnan

#pragma once
#include "helpDesk.h"
#include <iostream>
#include <cstring>
#include <iomanip>
#include<conio.h>
#include "GuestUser.h"
#include "RegisteredUser.h"
#include <cstdio>

using namespace std;

helpDesk::helpDesk() : RegisteredUser() {
	helpDeskId = "";
	
}
helpDesk::helpDesk(string hDId, string uId, string pWord, string rName, string rEmail) : RegisteredUser (uId, pWord, rName, rEmail) {
	helpDeskId = hDId;
}
void helpDesk::checkInquiries() {

}
void helpDesk::solveInquiries() {

}
helpDesk::~helpDesk() {
	cout << "HelpDesk class is deleted" << endl;
}
