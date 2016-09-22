/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on September 21, 2016, 8:18 PM
 */

#include <iostream>
using namespace std;

int srchArr(int *, int, int);


//User Libraries

//Global Constants
const int SIZE = 18;

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

//Declared Variables
    int answer(0);
    int accntN[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 
                        1302850, 8080152, 4562555, 5552012, 5050552,
                        7825877, 1250255, 1005231, 6545231, 3852085,
                        7576651, 7881200, 4581002};
    
    cout<<"This is the list you choose from."<<endl;
    
    for (int i=0; i<SIZE; i++){
        cout<<accntN[i]<<endl;
    }
//Menu
    cout<<endl<<endl<<endl;
    cout<<"This program tells the user whether or not his/her"
            "account number is Valid or invalid."<<endl;
//Input
    cout<<"Please enter your account number: ";
    cin>>answer;
    cout<<endl<<endl;
    
//Display the results
    if (srchArr(accntN, answer, SIZE) == true){
        cout<<"Your Account Number is Valid";}
    else {cout<<"Your Account Number is Invalid";}
        
    
//Exit Stage Right!
    return 0;
}



int srchArr(int *n, int answer, int size){
   bool value = false;
    // Linear search
    for (int i = 0; i < size; i++){
        if (*(n+i) == answer) {value = true;}
    }
    return value; // Returns true found or false for not found
}