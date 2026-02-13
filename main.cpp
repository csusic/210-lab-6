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
    
    //ptr = enterArrayData(double [SIZE]);
    //ptr = outputArrayData(double [SIZE]);
    //ptr = sumArray(double [SIZE]);
    
    delete [] ptr;
    
    return 0;
}

//receives dynamic double array 
//populates it with user values
double enterArrayData(double [SIZE]) {
    //temporary array
    double *arr = nullptr;
    arr = new double[SIZE];
    int count = 0; //accumulator
    //populate array
    for (int i = 0; i < SIZE; i++) {
        count++;
        cout << "Element #" << count << ": " << ptr[i] << endl;
    }
    return arr;
}

//receives dynamic double array
//outputs contents on one line
double outputArrayData(double [SIZE]) {
    //output array
    cout << "Outputting array elements: ";
    for (int i = 0; i < SIZE; i++)
        cout << ptr[i] << " ";
        
    return;
}

//receives dynamic double array
//calculates and returns sum
void sumArray(double [SIZE]) {
    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += ptr[i];
    }
    cout << "Sum of values: " << sum;
}