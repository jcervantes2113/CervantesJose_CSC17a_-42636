/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on September 21, 2016, 8:17 PM
 */


#include<iostream>
#include <string>
using namespace std;

void sortArr(string [], int);
void prntArr(string [], int);
int binSrch (string [], int, string);

//User Libraries

//Global Constants
const int SIZE = 20;

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables

string answer; 
string names[SIZE] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                           "Griffin, Jim", "Stamey, Marty", "Rose, Geri", 
                           "Taylor, Terri", "Johnson, Jill","Allison, Jeff", 
                           "Looney, Joe", "Wolfe, Bill", "James, Jean", 
                           "Weaver, Jim", "Pore, Bob", "Rutherford, Greg", 
                           "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
                           "Pike, Gordon", "Holland, Beth" };
//Initialize Variables

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    //Sort the array
        sortArr(names,SIZE);
    //Print the array
        prntArr(names,SIZE);
    //Binary Search
        cout<<endl<<endl<<"Please enter the name you are searching for"<<endl;
        getline(cin, answer);
        binSrch (names, SIZE, answer);
        
        if (binSrch (names, SIZE, answer) == 1){
        cout<<"YOUR NAME IS ON THE LIST!!!!!!";
        }else{
            cout<<"your name is NOT on the list";
        }

//Exit Stage Right!
    return 0;
}






int binSrch (string *n, int size, string answer){
//Declared variables   
    int first(0), last(0), mid;
    bool found = false;
    
//Initialized Variables
    last = size - 1;
    first= 0;
    
//Binary Search    
    while (!found && first <= last){
        mid = (first + last)/2;
        
        if (answer == *(n+mid)){
            found = true;
            return 1;
        }else if(answer < *(n+mid)){
            last = mid - 1;
        }else{
            first = mid +1;
        }//end of else statement 
        
    }//end of while statement 
    return -1;
}//end of function  



void sortArr(string array[], int NUM_NAMES){
    int minIndex;
    string minValue;

    for(int i = 0; i < (NUM_NAMES -1); i++)
    {
        minIndex = i;
        minValue = array[i];
        for(int x = i+1; x < NUM_NAMES; x++)
        {
            if (array[x] < minValue)
            {
                minValue = array[x];
                minIndex = x;
            }
        }
        array[minIndex] = array[i];
        array[i] = minValue;
    }
}

void prntArr(string *n, int size){
    for(int i=0; i<size; i++){
        cout<<*(n+i)<<endl;
    }
}