//It21194894
//KrithigaBalakrishnan

#pragma once
#include "Employer.h"
#include "GuestUser.h"
#include "RegisteredUser.h"
#include <iostream>
#include"Interview.h"
#include "Job.h"
#include "Report.h"
#include"Payment.h"
#include "Financereport.h"
#include <cstdio>


using namespace std;

#define SIZE 2

Employer::Employer() : RegisteredUser() {
	EmployerId = "";
	companyAddress="";
	contactDetails="";
	website="";

	payment[0] = new Payment();
	interview[0] = new Interview();
	job[0] = new Job();

}
Employer::Employer(string EmpId, string compAdd, string contdet, string wsite,string uId, string pWord, string rName, string rEmail, Interview *int1, Payment *pay1, Job *job1)
	: RegisteredUser(uId, pWord, rName, rEmail) {
	EmployerId = EmpId;
	companyAddress = compAdd;
	contactDetails = contdet;
	website = wsite;

	payment[0] = new Payment (*pay1);
	interview[0] = new Interview (*int1);
	job[0] = new Job(*job1);


}
void Employer::registerUser() {
	
}

void Employer::settlingMonthlyPayment() {
	
}

void Employer::uploadJobPosts() {
	
}

void Employer::scheduleInterviews() {
	
}
void Employer::shortListingCandidates(){
	report[0] = new Report();
	
}
void Employer::interviewingTheApplicants() {

}
void Employer::selectCandidates() {

}
void Employer::notifyFinanceEmployee() {

}

Employer::~Employer() {
	cout << "Employer class deleted" << endl;
	delete payment[0];
	delete job[0];
	delete interview[0];
		cout << "the End" << endl;
}


