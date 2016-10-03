/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: Modify Program 9-19 (the United Cause case study program) so it can 
 *          be used with any set of donations. The program should dynamically 
 *          allocate the donations array and ask the user to input its values.
 * Created on October 2, 2016, 8:41 PM
 */

#include<iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void arrSelectSort(int *[], int);
void showArray(const int [], int);
void showArrPtr(int *[], int);

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
const int NUM_DONATIONS = 15;

 // An array containing the donation amounts.
 int donations[NUM_DONATIONS] = { 5, 100, 5, 25, 10,
 5, 25, 5, 5, 100,
 10, 15, 10, 5, 10 };

 // An array of pointers to int.
 int *arrPtr[NUM_DONATIONS] = {};

 // Each element of arrPtr is a pointer to int. Make each
 // element point to an element in the donations array.
 for (int count = 0; count < NUM_DONATIONS; count++)
 arrPtr[count] = &donations[count];

 // Sort the elements of the array of pointers.
 arrSelectSort(arrPtr, NUM_DONATIONS);

 // Display the donations using the array of pointers. This
 // will display them in sorted order.
 cout << "The donations, sorted in ascending order are: \n";
 showArrPtr(arrPtr, NUM_DONATIONS);

 // Display the donations in their original order.
 cout << "The donations, in their original order are: \n";
 showArray(donations, NUM_DONATIONS);
 
//Initialize Variables

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results

//Exit Stage Right!
    return 0;
}





 //****************************************************************
 // Definition of function arrSelectSort. *
 // This function performs an ascending order selection sort on *
 // arr, which is an array of pointers. Each element of array *
 // points to an element of a second array. After the sort, *
 // arr will point to the elements of the second array in *
 // ascending order. *
 //****************************************************************
 void arrSelectSort(int *arr[], int size){

   int tempV(0);
   for (int i = 0; i < (size - 1); i++) {
        for(int j = i + 1; j < size; j++){
            
            if( *(arr[i])<*(arr[j])){
                tempV=*(arr[i]);
                *(arr[i])=*(arr[j]);
                *(arr[j])=tempV;
            } 
            
        }

      }
 }
 //***********************************************************
 // Definition of function showArray. *
 // This function displays the contents of arr. size is the *
 // number of elements. *
 //***********************************************************

 void showArray(const int arr[], int size)
 {
 for (int count = 0; count < size; count++)
 cout << arr[count] << " ";
 cout << endl;
 }

 //***************************************************************
 // Definition of function showArrPtr. *
 // This function displays the contents of the array pointed to *
 // by arr. size is the number of elements. *
 //***************************************************************

 void showArrPtr(int *arr[], int size) {
for (int count = 0; count < size; count++) cout << *(arr[count]) << " ";
cout << endl; 
 }