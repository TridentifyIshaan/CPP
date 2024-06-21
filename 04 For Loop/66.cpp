/*
> Date Created: June 21, 2024
> Author: Ishaan Rastogi
> Purpose: Problem 3
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

#include <iostream>
using namespace std;

int main () {

    for ( int i = 0; i <= 15; i += 2) { //increment 2 times
        cout << i << " ";

        if ( i & 1 ) {
            continue;
        }

        i++; //increment
    }
}

//Output - 0 3 5 7 9 11 13 15

/* 

For Terminal Code... Ctrl + Shift + `
NOTE- Install Code Runner extension to run the code

To Run code- Ctrl + Alt + N

*/