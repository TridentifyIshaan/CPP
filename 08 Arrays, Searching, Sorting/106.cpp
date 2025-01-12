/*
> Date Created: July 018, 2024
> Author: Ishaan Rastogi
> Purpose: Better version of 104.cpp
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

// Simple logic if you read it.
int getMax (int num[], int n) {
    
    int max = INT_MIN;
    for ( int i = 0; i < n; i++) {
        max = std::max(max, num[i]); //max function
    }
    return max;
}

int main () {

    int size;
    cout << "Enter the size :" << endl;
    cin >> size;

    int num[100];
    for ( int i = 0; i < size; i++ ) {
        cout << "Enter the array :" << endl;
        cin >> num[i];
        break;
    }

    cout << "Maximum number is " << getMax( num, size) << endl;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/