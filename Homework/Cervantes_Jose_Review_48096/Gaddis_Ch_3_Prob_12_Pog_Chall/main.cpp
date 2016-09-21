/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on September 20, 2016, 4:43 PM
 */

#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float dCelus=0.0;
    float dFahit=0.0;
    
    
    //Menu
        cout<<"This program converts the temperature of Fahrenheit to Celsius."
            <<endl<<endl;
        cout<<"Please enter the degree you would like to convert to"
              "Fahrenheit:";
    
    //Input 
        cin>>dFahit;
    
    //Calculation
        dCelus =(dFahit - 32)*(.55555); //Conversion Formmula
   
    //Output the results
        cout<<dFahit<<" Degree in Fahrenheit is "<<dCelus<<" in Celsius"<<endl;
    return 0;
}

