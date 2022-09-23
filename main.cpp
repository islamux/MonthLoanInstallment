#include <iostream>
using namespace std;

// Reading 
#include "read_number_positive_int.h"

// Calculating
#include "monthly_installment_amount.h"

// Printing
#include "print_number_int_with_double_msg.h"

/*
    * Program to 
        # Read a LoanAmount and How many months you need to settle a loan .
        # Calculate monthly installement.

    * ReadPositiveNumber ==> LoanAmount
    * ReadPositiveNumber ==> NumberOfMonth
    * Calculating ==> ==>MonthlyInstallment =  LaonAmount /  NumberOfMonths
    * Printing ==> Result
         
        loan = 5000 
        months = 10  
        monthlyInstallment = 5000 / 10 
*/



int main(){

    //Reading
    float loanAmount = ReadNumberPositiveInt("Enter a Loan Amount: ");
    float numberOfMonths = ReadNumberPositiveInt("Enter a Number of Months: ");

    //Calculating
    float monthlyInstallment = MonthlyInstallmentAmount(loanAmount, numberOfMonths);

    // Printing
    PrintNumberIntWithDoubleMsg("Loan Amount = ",loanAmount , ".");
    PrintNumberIntWithDoubleMsg("Number of Months: ", numberOfMonths, ".");
    PrintNumberIntWithDoubleMsg("Monthly Installment = ", monthlyInstallment,"$.");



    return 0;
}