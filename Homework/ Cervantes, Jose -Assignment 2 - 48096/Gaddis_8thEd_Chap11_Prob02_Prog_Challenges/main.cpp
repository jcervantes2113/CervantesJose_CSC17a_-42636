/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on October 16, 2016, 2:24 PM
 */

#include<iostream>
#include<string>
using namespace std;


struct Movie {
    string title;
    string director;
    int year;
    int length;
    float profit;
    float loss;
    
};


//User Libraries

//Global Constants

//Function Prototypes

void prntStruct(Movie);
//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    Movie mData1, mData2;
//Initialize Variables

//Input Values 
    cout<<"--MOVIE 1--"<<endl;
    cout<<"Please enter the tittle of the movie: ";
    cin>>mData1.title;
    cout<<"please enter the director of the movie: ";
    cin>>mData1.director;
    cout<<"Please enter the year the movie was released in year format: ";
    cin>>mData1.year;
    cout<<"Please enter the length of the movie in minutes: ";
    cin>>mData1.length;
    cout<<"Please enter the movie's first year revenue: ";
    cin>>mData1.profit;
    cout<<"Please enter the movie's loss in profit: ";
    cin>>mData1.loss;
    
    cout<<endl<<endl;
    cout<<"--MOVIE 2--"<<endl;
    cout<<"Please enter the tittle of the movie: ";
    cin>>mData2.title;
    cout<<"please enter the director of the movie: ";
    cin>>mData2.director;
    cout<<"Please enter the year the movie was released in year format: ";
    cin>>mData2.year;
    cout<<"Please enter the length of the movie in minutes: ";
    cin>>mData2.length;
    cout<<"Please enter the movie's first year revenue: ";
    cin>>mData2.profit;
    cout<<"Please enter the movie's loss in profit: ";
    cin>>mData2.loss;
//Map The Inputs to the Outputs
    
    cout<<endl<<endl;
    
    //Out put the results for movie one
    cout<<"--MOVIE 1--"<<endl;
    prntStruct(mData1);
    
    //Output the results for movie two
    cout<<"--MOVIE 2--"<<endl;
    prntStruct(mData2);
//Output the Results

//Exit Stage Right!
    return 0;
}


void prntStruct(Movie m){
    cout<<"Title: "<<m.title<<endl;
    cout<<"Director: "<<m.director<<endl;
    cout<<"Year Released: "<<m.year<<endl;
    cout<<"Running Time (in Minutes): "<<m.length<<endl;
    cout<<"profit gained: "<<m.profit<<endl;
    cout<<"Money lost: "<<m.loss<<endl<<endl;
}