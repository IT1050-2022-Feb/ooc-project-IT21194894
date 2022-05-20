//IT21194894
//Krithiga Balakrishnan

#pragma once
#include "Interview.h"
#include <iostream>
#include <cstdio>
using namespace std;

Interview::Interview() {
	interviewId = 0;
	interviewType = "";

}
Interview::Interview(int intId, string intType) {
	interviewId = intId;
	interviewType = intType;

}
void Interview::updateInterviewDetails() {

}
void Interview::displayInterviewDetails() {

}

Interview::~Interview() {
	cout << "Interview class is deleted" << endl;
}
