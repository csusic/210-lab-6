// COMSC-210 | Lab 6 | Christine Susic

#include <iostream>
using namespace std;

//function prototypes
double* enterArrayData(double []);
double* outputArrayData(double []);
void sumArray(double []);

//size of array
const int SIZE = 5;

int main() {
    //create pointer that points to new array
    double *ptr = nullptr;
    //array of doubles
    ptr = new double [SIZE]; //new array
    
    enterArrayData(ptr);
    outputArrayData(ptr);
    sumArray(ptr);
    
    delete [] ptr; //delete array
    
    return 0;
}

double* enterArrayData(double [SIZE]) {
    cout << "Data entry for the array: " << endl;
    //temporary array
    double *arr = nullptr;
    arr = new double[SIZE];
    int count = -1; //accumulator
    //populate array with user values
    for (int i = 0; i < SIZE; i++) {
        count++;
        cout << "> Element #" << count << ": ";
        cin >> arr[i];
    }
    cout << "Data entry complete." << endl;
    return arr;
}

double* outputArrayData(double [SIZE]) {
    //temporary array
    double *arr = nullptr;
    arr = new double[SIZE];
    cout << "Outputting array elements: ";
    //output array
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return arr;
}

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