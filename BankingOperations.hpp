#ifndef BANKINGOPERATIONS_H
#define BANKINGOPERATIONS_H

#include "User.hpp"

class BankingOperations {

public:

    static int findUserByUsername(string username);
    static int findUserById(int id);

    static void registerUser();
    static int login();

    static void deposit(int index);
    static void deposit(int index, double amount);   // function overloading

    static void withdraw(int index);
    static void transfer(int index);

    static void checkBalance(int index);
    static void viewTransactions(int index);

    static void addTransaction(int index,string type,double amount,int otherId=0);
};

#endif