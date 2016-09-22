/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on September 21, 2016, 5:01 PM
 */


//User Libraries
#include<iostream>
using namespace std;

float celsius ();

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    int count;
    

//Initialize Variables

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    cout << "This program displays the Fahrenheit and Celsius conversion of 0 - 20.";
    cout << endl << endl;
    
    cout << "Fahrenheit  Celsius" << endl;
    for (count = 0; count <= 20; count++){
       
        //This displays the result and the function
        cout << count << "           " << celsius() << endl;
    }


//Exit Stage Right!
    return 0;
}



//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** celsius  ***********************************
 *Inputs
 *      None
 *Outputs
 * 
 * c_temp --> outputs the kinetic energy of an object
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

float celsius (){
    float c_temp;
    //c_temp = contains the final conversion of Fahrenheit to Celsius 
    
    //This keeps the original value of the temperature from the previous loop
    static float f_temp = 0; 
    
    c_temp = (5 * (f_temp - 32))/9;// This convert Fahrenheit to Celsius
    f_temp++; // This increments f_temp by 1 to change its value 
    
    return (c_temp);
}
