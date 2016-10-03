/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: Write a program that dynamically allocates an array large enough to 
    * hold a user- defined number of test scores. Once all the scores are entered, 
    * the array should be passed to a function that sorts them in ascending order. 
    * Another function should be Solving the Pointer Rewrite Problem called that
    * calculates the average score. The program should display the sorted list of 
    * scores and averages with appropriate headings. Use pointer notation rather 
    * than array notation whenever possible. Input Validation: Do not accept negative 
    * numbers for test scores.
 * Created on October 2, 2016, 3:06 PM
 */

#include<iostream>
using namespace std;

//User Libraries

//Global Constants
const int SIZE=100;

//Function Prototypes
void prntAry(int *, int);
void srtArry(int *, int);
float calAvrg(int *, int);

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables

//Initialize Variables
    int answer(0);
    int *scorePt;
    int total(0);
    
    //Allocate memory
    scorePt=new int[SIZE];
    
//Input Values 
    cout<<"Please enter the number of test scores you would like to enter:";
    cin>>answer;
     
    //Checks to see if the number entered is a positive number and if it small enough
    if(answer>0 && answer<=SIZE){
        
        cout<<"Please enter the test score for:"<<endl;
        for(int i=0; i<answer; i++){
            
                cout<<"Student "<<i+1<<":";
                cin>>*(scorePt+i);
                
                while(*(scorePt+i)<=0){
                    cout<<"Please enter a positive score for \n"
                          "Student "<<i+1<<":";
                    cin>>*(scorePt+i);
                }
        }
              
    }else{
        cout<<"you did not enter a greater than 0. or to many students"<<endl;
    }
    
    
    
//Map The Inputs to the Outputs
    
//Output the Results
    if(answer>0 && answer<=SIZE){
        cout<<endl;
        //Sorts the Array
        srtArry (scorePt, answer);

        //Prints the Array
        cout<<"The test scores in ascending order:"<<endl;
        prntAry (scorePt, answer);

        //Outputs the results
        cout<<"The average test scores is: ";
        total=calAvrg(scorePt, answer);
        cout<<total/answer<<" percent";
    }
//Exit Stage Right!
    delete []scorePt;
    return 0;
}





float calAvrg(int *a, int size){
    int avrge(0);
    for(int i=0; i<size; i++){
        avrge+=*(a+i);
    }
    return(avrge);
}


void srtArry (int *a, int size){
    for(int i=0; i<size-1; i++){
        for(int z=i+1; z<size; z++){
            
            if(*(a+i)> *(a+z)){
                (*(a+i))=(*(a+i))^(*(a+z));
                (*(a+z))=(*(a+i))^(*(a+z));
                (*(a+i))=(*(a+i))^(*(a+z));
            }
        }
    }
}

void prntAry(int *a, int size){
    for(int i=0; i<size; i++){
        
        cout<<*(a+i)<<endl;
        

    }
}