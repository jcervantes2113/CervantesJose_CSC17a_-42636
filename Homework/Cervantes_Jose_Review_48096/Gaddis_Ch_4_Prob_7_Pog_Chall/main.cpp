/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on September 21, 2016, 12:25 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int time(0);
    int convsn(0);
    int seconds(0);
    int minuetes(0);
    int days(0);
    
    
    cout<<"This program converts seconds into its simplified time frame."<<endl;
    
    cout<<"Please enter the time you wish to convert:";
    cin>>time;
    
    if(time<3600){
        convsn=time/60;
        seconds=time - (convsn*60);
        cout<<convsn<<" Minutes and "<<seconds<<" seconds is the converted time"<<endl;
        
    }else if(time<86400 && time>=3600){
        convsn=time/3600;
        minuetes=(time-(convsn*3600))/60;
        seconds= (time-(convsn*3600))%60;
        
        cout<<convsn<<" hour and "<<minuetes<<" with "<<seconds<<" seconds "
              "minutes is the converted time"<<endl;
    }else{
        
        days=time/86400;
        convsn=((time-(days*86400))/3600);
        minuetes=((time-(days*86400))-(convsn*3600))/60;
        seconds= (time-(convsn*86400))%60;
        
        cout<<days<<" day(s) "<<convsn<<" hour and "<<minuetes<<" with "<<seconds<<" seconds "
              "minutes is the converted time"<<endl;
    }
    
    return 0;
}

