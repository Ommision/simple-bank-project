#include <string>
#include <iostream>
#include <cstdio>
#include <random>
#include<cstdlib>
using namespace std;


void showMenu(){
    std::cout << "============Welcome to the Bank Account Management System.=========== "  << std::endl << std::endl;
    std::cout << "1. Create New Account " << std::endl;
    std::cout << "2. Check Balance " << std::endl;
    std::cout << "3. Deposit Amount " << std::endl;
    std::cout << "4. Withdraw Amount " << std::endl;
    std::cout << "=====================================================================" << std::endl;
}

int main(){
    
    char yesNo;
    int option;
    string firstName, lastName;
    int accountNumber = rand();
    int verifyAccountNumber = accountNumber;
    double balance = 0;
    srand((unsigned) time(NULL));
    
    do{

    showMenu();
    std::cout << "Enter your choice:";
    std::cin >> option;
    switch(option){
        case 1:
            std::cout << "First Name: ";
            std::cin >> firstName;
            std::cout << "Last Name: ";
            std::cin >> lastName;
            std::cout << " " << std::endl << std::endl << std::endl;
            std::cout << "Account created successfully! Your account number is " << accountNumber << std::endl; 
            break;

        case 2:
            
            std::cout << "Enter account number to check balance:";
            std::cin >> verifyAccountNumber;
            if(verifyAccountNumber == accountNumber){
                std::cout << "Your account balance " << balance << endl;
            }
            else{
                std::cout << "Incorrect account number!";
            }
            break;
        
        case 3:
            double depositAmount;
            std::cout << "Enter account number to deposit money:";
            std::cin >> verifyAccountNumber;
            if(verifyAccountNumber == accountNumber){
                std::cout << "Enter money to deposit:";
                std::cin >> depositAmount;
                balance += depositAmount;
            }
            else{
                std::cout << "Incorrect account number!";
            }
            break;
        
        case 4:
            double withdrawAmount;
            std::cout << "Enter account number to withdraw money: ";
            std::cin >> verifyAccountNumber;
            if(verifyAccountNumber == accountNumber){
                if(withdrawAmount <= balance){
                    std::cout << "Enter money to withdraw:";
                    std::cin >> withdrawAmount;
                    balance -= withdrawAmount;
                }
                else{
                    std::cout << "Not enough money!";   
                }
            }
            else{
                std::cout << "Incorrect account number!";
            }
            break;


    }
    std::cout << "Would you like to do another transaction. If YES press Y, If NO press N: ";
    std::cin >> yesNo;  
    }while(yesNo == 'Y' || yesNo == 'y');
    std::cout << "Thank you for using Bank Account Management System!" << std::endl;

    return 0;
}
