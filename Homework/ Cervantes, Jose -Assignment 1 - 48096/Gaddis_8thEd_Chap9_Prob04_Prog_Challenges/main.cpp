/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on October 2, 2016, 6:15 PM
 */

#include<iostream>
#include<string>
using namespace std;

//User Libraries

//Global Constants
const int SIZE=100;

//Function Prototypes
void prntAry(float *, int, string[]);
void srtArry(float *, int, string[]);
float calAvrg(float *, int);


//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables

//Initialize Variables
    int answer(0);
    float *scorePt;
    float total(0);
    string names[SIZE];
    
    //Allocate memory
    scorePt=new float[SIZE];
    
//Input Values 
    cout<<"Please enter the number of test scores you would like to enter:";
    cin>>answer;
     
    //Checks to see if the number entered is a positive number and if it small enough
    if(answer>0 && answer<=SIZE){
        
        cout<<"Please enter the test score and student name for(out of 100 percent):"<<endl;
        for(int i=0; i<answer; i++){
            
                cout<<"Student "<<i+1<<" name: ";
                cin>>names[i];
                
                cout<<"Student "<<i+1<<":";
                cin>>*(scorePt+i);
                
                while(*(scorePt+i)<=0){
                    cout<<"Please enter a positive score for \n"
                          "Student "<<i+1<<":";
                    cin>>*(scorePt+i);
                }
                cout<<endl;
        }
              
    }else{
        cout<<"you did not enter a greater than 0. or to many students"<<endl;
    }
    
    
    
//Map The Inputs to the Outputs
    
//Output the Results
    if(answer>0 && answer<=SIZE){
        cout<<endl;
        
        //Sorts the Array
        srtArry (scorePt, answer, names);

        
        //Prints the Array
        cout<<"The test scores in ascending order with the lowest score set to zero:"<<endl;
        prntAry (scorePt, answer, names);

        //Outputs the results
        cout<<"The average test scores is: ";
        total=calAvrg(scorePt, answer);
        cout<<total/answer<<" percent";
    }
//Exit Stage Right!
    delete []scorePt;
    return 0;
}





float calAvrg(float *a, int size){
    int avrge(0);
    for(int i=0; i<size; i++){
        avrge+=*(a+i);
    }
    return(avrge);
}


void srtArry (float *a, int size, string names[]){
    int tempV(0);
    string tempN;
    for(int i=0; i<size-1; i++){
        for(int z=i+1; z<size; z++){
            
            if(*(a+i)> *(a+z)){
                tempV=(*(a+z));
                (*(a+z))=(*(a+i));
                (*(a+i))=tempV;
                
                tempN=names[z];
                names[z]=names[i];
                names[i]=tempN;
            }
        }
    }
}

void prntAry(float *a, int size, string names[]){
    for(int i=0; i<size; i++){
        
        cout<<names[i]<<"   "<<*(a+i)<<endl;
        

    }
}