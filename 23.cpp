/*
> Date Created: June 16, 2024
> Author: Ishaan Rastogi
> Purpose: To print ...

Eg- For n = 4,

*
* *
* * *
* * * *

> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: Working
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int i = 1;
    while ( i <= n ) {
        int j = 1;
        while ( j <= i ) { //Most important line
            cout << '*' <<" ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/