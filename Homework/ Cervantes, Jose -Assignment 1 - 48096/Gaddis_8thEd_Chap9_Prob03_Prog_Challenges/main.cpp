/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on October 2, 2016, 5:45 PM
 */


#include<iostream>
using namespace std;

//User Libraries

//Global Constants
const int SIZE=100;

//Function Prototypes
void prntAry(float *, int);
void srtArry(float *, int);
float calAvrg(float *, int);
void dropLow(float *);

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables

//Initialize Variables
    int answer(0);
    float *scorePt;
    float total(0);
    
    //Allocate memory
    scorePt=new float[SIZE];
    
//Input Values 
    cout<<"Please enter the number of test scores you would like to enter:";
    cin>>answer;
     
    //Checks to see if the number entered is a positive number and if it small enough
    if(answer>0 && answer<=SIZE){
        
        cout<<"Please enter the test score for(out of 100 percent):"<<endl;
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

        //Drops the lowest score
        dropLow(scorePt);
        
        //Prints the Array
        cout<<"The test scores in ascending order with the lowest score set to zero:"<<endl;
        cout<<"The lowest test score has been set to zero or dropped."<<endl;
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



void dropLow(float *a){
    //This sets the lowest score equal to zero which is the same as dropped
    (*(a+0))=0;
}

float calAvrg(float *a, int size){
    int avrge(0);
    for(int i=0; i<size; i++){
        avrge+=*(a+i);
    }
    return(avrge);
}


void srtArry (float *a, int size){
    int tempV(0);
    for(int i=0; i<size-1; i++){
        for(int z=i+1; z<size; z++){
            
            if(*(a+i)> *(a+z)){
                tempV=(*(a+z));
                (*(a+z))=(*(a+i));
                (*(a+i))=tempV;
            }
        }
    }
}

void prntAry(float *a, int size){
    for(int i=0; i<size; i++){
        
        cout<<*(a+i)<<endl;
        

    }
}