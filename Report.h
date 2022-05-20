//IT21194894
//Krithiga Balakrishnan
#pragma once
#include <iostream>
#include <cstring>
#include<iomanip>
#include<conio.h>
#include "Payment.h"
#include "FinanceReport.h"
#include <cstdio>
using namespace std;

// Uni-Directional association between Paymnet and Report
// Uni-Directional association between FinanceReport and Report
class Report
{
private:
	Payment* payment;
	FinanceReport* finreport;
public:
	Report();
	void retrievePaymentDetailsReport();
	void retrieveFinanceReport();
	void retrieveShortListedCandidates();
	~Report();
};

