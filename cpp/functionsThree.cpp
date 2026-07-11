#include<bits/stdc++.h>

using namespace std;

void changeElementInArray(int arr[]){
    arr[0] = 100;
}

int main(){
    int arr[] = {1,2,3,4,5};
    cout << arr[0] << endl;
    changeElementInArray(arr);
    cout << arr[0] << endl;
    return 0;
}