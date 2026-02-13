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
    ptr = new double [SIZE]; //new array
    
    //populate array
    for (int i = 0; i < SIZE; i++)
        ptr[i];
        
    //output array
    for (int i = 0; i < SIZE; i++)
        cout << ptr[i] << " ";
        
        
    
    return 0;
}