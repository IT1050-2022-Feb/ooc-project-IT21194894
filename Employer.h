//IT21194894
//KrithigaBalakrishnan

#pragma once
#include <iostream>
#include <cstring>
#include<iomanip>
#include<conio.h>
#include "GuestUser.h"
#include"RegisteredUser.h"
#include "Job.h"
#include "Report.h"
#include"Payment.h"
#include "Financereport.h"
#include "Interview.h"
#include <cstdio>

using namespace std;


//Inheritance relationship between Registered User and Employer
//Composition relationship between Employer and Payment
// Composition relationship between Employer and Interview
// Composition relationship between Employer and Job
// Uni-Directional association between Employer and Report
//Bi-Directional association between Employer and Candidate

class Employer : public RegisteredUser
{
private:
	string EmployerId;
	string companyAddress;
	string contactDetails;
	string website;

	Payment* payment[1];
	Interview * interview[1];
	Job *job[1];
	Report* report[1];

public:
	Employer();
	Employer(string EmpId, string compAdd, string contdet, string wsite, string uId, string pWord, string rName, string rEmail, Interview* int1, Payment* pay1, Job* job1);
	void registerUser();
	void settlingMonthlyPayment();
	void uploadJobPosts();
	void scheduleInterviews();
	void shortListingCandidates();
	void interviewingTheApplicants();
	void selectCandidates();
	void notifyFinanceEmployee();
	~Employer();
};

