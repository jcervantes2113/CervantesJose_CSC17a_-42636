/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: Write a function that dynamically allocates an array of integers. 
 *          The function should accept an integer argument indicating the number of 
 *          elements to allocate. The function should return a pointer to the array.

 * Created on September 26, 2016, 1:01 PM
 */

#include<iostream>
#include<ctime>
using namespace std;

//User Libraries

//Global Constants
const int SIZE=70;
//Function Prototypes
int* arryInts (int);
void prntArry(int *, int, int);

//Execution Begins Here!
int main(int argc, char** argv) {
//Declared Variables
    int *arry;
    int perLine=10;
//Initialize Variable
    
    
//Input Data
    cout<<"This Program passes a pointer through a function that has been allocated memory \n"
          "in the function and has returned the pointer into an array"<<endl<<endl;
    arry=arryInts(SIZE);

//Output Data    
    cout<<"This is an array of integers that is stored in a array that has been \n"
          "dynamically allocated."<<endl;
    prntArry(arry, SIZE, perLine);

   
//Exit Stage Right!
    delete [] arry;
    return 0;
}





//Fills the array with random two digit numbers and allocates memory for the array
int* arryInts (int size){
    //Seed time
    srand (time(0));
    
    //Allocate memory
    int *array=new int[size];
    
    for(int i=0; i<size; i++){
        *(array+i)= (rand()%89+10); //Generates a random two digit number
    }
    
    return array;
}


void prntArry(int *a, int size, int perLine){
    for(int i=0; i<size; i++){
        cout<< *(a+i)<<" ";
        
        //Puts 10 numbers per line 
        if(i%perLine==(perLine-1)){
            cout<<endl;
        }
    }
}