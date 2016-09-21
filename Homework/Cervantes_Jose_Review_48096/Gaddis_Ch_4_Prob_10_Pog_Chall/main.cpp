/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on September 21, 2016, 11:53 AM
 */

#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int year(0), month(0);
    
    //Menu
    cout<<"This program tells the user how many days a given month has"<<endl<<endl;
    
    //Input
    cout<<"Please enter the year: ";
    cin>>year;
    cout<<"Please enter the month: ";
    cin>>month;
    
    
    //Output the input
    if(month==2 && year%4==0){
        cout<<"February has 29 days its a leap year"<<endl;
    }else if(month==1||month==3||month==5||month==7||month==8||
             month==10||month == 12){
        cout<<"This month has 31 days"<<endl;
    }else{
        cout<<"This month has 30 days in it"<<endl;
    }
    
    
    return 0;
}

