/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on September 21, 2016, 7:41 PM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float count, num_org, perc_inc, days, ttl_org;

//Initialize Variables
    ttl_org = 0;

//Input Values 
    cout << "This program will predict the size of a population of organisms.";
    cout << endl << endl;
    cout << "Please enter the number of organisms: ";
    cin  >> num_org;
    
    cout << "Please enter the percent increase of the population: ";
    cin  >> perc_inc;
    
    cout << "Please enter the number of days they will multiply: ";
    cin  >> days;
    
//Map The Inputs to the Outputs
    cout << "Days    Population" << endl;
    for (count = 1; count <=days; count++){
        
        //This if statement calculates the percent greater than 10 
        if (num_org >= 2 && perc_inc <=10){
            
            //This calculates the percent increase in population and then adds
            // it to the total population
            ttl_org = ((perc_inc * 0.001) * num_org);
            num_org = num_org + ttl_org ;
            
            cout << count << "       " << num_org << endl;
          
        //This if statement calculates the percent less than 10 
        }else if (num_org >= 2 && perc_inc >=10.000001){
           
            //This calculates the percent increase in population and then adds
            // it to the total population
            ttl_org = ((perc_inc * 0.01) * num_org);
            num_org = num_org + ttl_org;
            
            cout << count << "       " << num_org << endl;
            
            
        }
        
        else {
            cout << "Number of organisms has to be greater than 2." << endl;
        }
        
        
    }
    
//Output the Results

//Exit Stage Right!
    return 0;
}