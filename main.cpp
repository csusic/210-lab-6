// COMSC-210 | Lab 6 | Christine Susic

#include <iostream>
using namespace std;

//function prototypes
double enterArrayData(double []);
double outputArrayData(double []);
void sumArray(double []);

//size of array
const int SIZE = 5;

int main() {
    //create pointer that points to new array
    double *ptr = nullptr;
    //array of doubles
    ptr = new double [SIZE]; //new array
    
    enterArrayData();
    outputArrayData();
    sumArray();
    
    return 0;
}

//receives dynamic double array 
//populates it with user values
double enterArrayData(double []) {
    //populate array
    for (int i = 0; i < SIZE; i++)
        ptr[i];
    return;
}

//receives dynamic double array
//outputs contents on one line
double outputArrayData(double []) {
    //output array
    for (int i = 0; i < SIZE; i++)
        cout << ptr[i] << " ";
    return;
}

//receives dynamic double array
//calculates and returns sum
void sumArray(double []) {
    
}