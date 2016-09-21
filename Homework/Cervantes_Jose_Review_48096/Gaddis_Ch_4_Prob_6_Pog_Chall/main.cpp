/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on September 21, 2016, 12:11 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float objMass(0);
    float convsn(0);
    
    //Menu
    cout<<"This program converts the mass of an object to its proper weight in newton."
          ""<<endl<<endl;
    cout<<"Please enter the mass of the object you wish to find its weight:";
    
    //Input
    cin>>objMass;
    
    //Decision loop
    if(objMass<=1000 && objMass>=10){
    convsn=objMass*9.8;
    cout<<"The objects weight is "<<convsn<<" newton"<<endl;
    }else if(objMass<10){
        cout<<"The object is too light"<<endl;
    }else{
        cout<<"The object is to heavy"<<endl;
    }
    return 0;
}

