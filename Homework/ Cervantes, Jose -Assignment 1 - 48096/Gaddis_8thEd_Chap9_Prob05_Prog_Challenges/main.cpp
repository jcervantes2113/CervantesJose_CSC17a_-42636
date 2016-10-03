/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on October 2, 2016, 7:54 PM
 */

#include <iostream>
using namespace std;

int doSomething(int*, int*);

int main(int argc, char** argv) {
    int x, y;
    
    cout<<"This program uses pointer notation instead of reference notation"<<endl;
    
    cout<<"Please enter the value for y: ";
    cin>>y;
    
    cout<<"Please enter the value for x: ";
    cin>>x;
    
    cout<<"The answer is "<<doSomething(&x, &y);
    
    return 0;
    
}

int doSomething(int *x, int *y) 
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}