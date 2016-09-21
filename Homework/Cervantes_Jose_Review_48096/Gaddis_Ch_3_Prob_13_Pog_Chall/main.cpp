/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on September 21, 2016, 9:28 AM
 */

#include <iostream>
#include <iomanip>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float dolr_yen=98.93;
    float dolr_euro=0.74;
    float amount=0;
    float convsn=0;
    
    //Menu
    cout<<"Please enter the amount of U.S. dollars you would like to convert to "
          "Japanese currency and European currency:";
    //Inputs
    cin>>amount;
    
    
    

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //calculations
    convsn=amount*dolr_yen;
    cout<<amount<<" Dollars in U.S. currency to "
            "Japanese currency is "<<convsn<<" Yen."<<endl;

    //Calculations
    convsn=amount*dolr_euro;
    cout<<amount<<" Dollars in U.S. currency to "
        "European currency is "<<convsn<<" Euros."<<endl;
    
    
    
    
    return 0;
}

