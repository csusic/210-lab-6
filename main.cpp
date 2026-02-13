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
        cout << "Element #" << count << ": " << arr[i] << endl;
    }
    return arr;
}

//receives dynamic double array
//outputs contents on one line
double outputArrayData(double [SIZE]) {
    //temporary array
    double *arr = nullptr;
    arr = new double[SIZE];
    //output array
    cout << "Outputting array elements: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
        return arr;
    }
}

//receives dynamic double array
void sumArray(double [SIZE]) {
    //temporary array
    double *arr = nullptr;
    arr = new double[SIZE];
    //calculates and returns sum
    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    cout << "Sum of values: " << sum;
}