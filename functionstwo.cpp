#include<bits/stdc++.h>

using namespace std;

// pass by value function
void passByValue(int num){ // num = 5, the num variable inside this function is a copy of the original variable passed from main, so any changes made to num inside this function will not affect the original variable
    num = num + 5; // num = 10
    cout << "Inside passByValue function: " << num << endl; // 10
}

// pass by reference function
void passByReference(int &num){ // num = 5 , the & symbol indicates that num is passed by reference, meaning that any changes made to num inside this function will affect the original variable passed from main
    num = num + 5; // num = 10
    cout << "Inside passByReference function: " << num << endl; // 10
}

int main(){
    int num = 5;
    cout << "Before calling passByValue function: " << num << endl; // 5
    passByValue(num); // argument = 5 (actual value passed to the function)
    cout << "After calling passByValue function: " << num << endl; // 5 (num is unchanged because it was passed by value)

    cout << "Before calling passByReference function: " << num << endl; // 5
    passByReference(num); // argument = 5 (actual value passed to the function)
    cout << "After calling passByReference function: " << num << endl; // 10 (num is changed because it was passed by reference)

    return 0;
}