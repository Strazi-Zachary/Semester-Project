//
// Created by Connor McKelvey on 11/7/2021.
#include <iostream>
userinterface.cpp
userinterface.h


int main(void){
    int userChoice=0;
    std::cout<<"enter a menu choice:\n1: display file info\n2: add echo\n3: normalization\n4: gain\n0: exit" << std::endl;
    do{
        std::cin>>userChoice;
        UI input(userChoice);
    }while (userChoice!=0);
}

