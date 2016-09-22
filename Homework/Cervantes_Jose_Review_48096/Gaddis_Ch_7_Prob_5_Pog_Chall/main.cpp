/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on September 21, 2016, 11:04 PM
 */

#include<iostream>
#include <cstdlib> 
#include<ctime>

using namespace std;

//User Libraries

//Global Constants
    const int nMonkys = 3;
    const int nDays   = 5;
//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    int sum[nMonkys][nDays] = {{},{}};
    int totl_ate[nMonkys][nDays] = {{},{}};
    int sumMonky[nMonkys] = {};
    string mon_fri[nDays] = {"Monday", "Tuesday", "Wednesday", "Thursday","Friday" };
    
//Initialize Variables

//Input Values 
    // Menu
    cout << "Please enter the amount of food eaten by monkey per day and week."
            "(In Pounds)" << endl;
    
    // Gets input of food eaten
    for(int i = 0; i < nMonkys; i++){
        cout << "Monkey " << i + 1 << " Week "  << i + 1 << endl;
        for (int x = 0; x < nDays; x++){
            do {
                cout << mon_fri[x] << ": ";
                cin >> totl_ate[i][x];
                if (totl_ate[i][x] < 0)
                {cout << "Try again. No negative numbers." << endl;}
                
             }while(totl_ate[i][x] < 0);
            
            if (x == 4){cout << endl;}
        }
    }
    
    //Gets average of food eaten per day
     for(int i = 0; i < nMonkys; i++){
        //Declared variable
        int dlyAvrge = 0;
            for (int x = 0; x < nDays; x++) { dlyAvrge = dlyAvrge + totl_ate[i][x];
            }
        sumMonky[i] = dlyAvrge;

        cout << "The average amount of food eaten per day is  " << sumMonky[i] << endl;
        
    }
    
    int dlyAvrge = 0;
    for (int i = 0; i < nMonkys; i++){
        if (sumMonky[i] > dlyAvrge){
            dlyAvrge = sumMonky[i];
        }
    }
    
    cout << "The greatest amount of food eaten during the week by any one monkey: " << dlyAvrge << endl;
    for (int i = 0; i < nMonkys; i++){
        if (sumMonky[i] < dlyAvrge){
            dlyAvrge = sumMonky[i];
        }
    }
    
    cout << "The least amount of food eaten during the week by any one monkey: " << dlyAvrge << endl;
    
    
//Map The Inputs to the Outputs
    
//Output the Results


//Exit Stage Right!
    return 0;
}

