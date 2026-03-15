#include <iostream>
#include "Admin.hpp"
#include "BankingOperations.hpp"

using namespace std;

void Admin::showProfile(){
    cout<<"Admin Panel\n";
}

void Admin::freezeAccount(int id){

    int index = BankingOperations::findUserById(id);

    if(index!=-1){
        users[index].frozen = true;
        cout<<"Account frozen\n";
    }
}

void Admin::unfreezeAccount(int id){

    int index = BankingOperations::findUserById(id);

    if(index!=-1){
        users[index].frozen = false;
        cout<<"Account unfrozen\n";
    }
}

void Admin::deleteUser(int id){

    int index = BankingOperations::findUserById(id);

    if(index==-1)
        return;

    for(int i=index;i<userCount-1;i++)
        users[i]=users[i+1];

    userCount--;

    cout<<"User deleted\n";
}
