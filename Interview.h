//IT21194894
//Krithiga Balakrishnan

#pragma once
#include <iostream>
#include <cstring>
#include<iomanip>
#include<conio.h>
#include <cstdio>
//#include "GuestUser.h"
using namespace std;

// Composition relationship between Employer and Interview
class Interview
{
private:
	int interviewId;
	string interviewType;

public:
	Interview();
	Interview(int intId, string intType);
	void updateInterviewDetails();
	void displayInterviewDetails();
	~Interview();

};

