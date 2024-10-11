// Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++) cin>>arr[i];
    int temp = arr[0];
    bool flag = false;
    for(int i = 1;i<n;i++){
        if(temp==arr[i]){
            flag = true;
            break;
        }
        else temp = arr[i];
    }
    if(flag==false) cout<<"no dupicate";
    else cout<<"duplicate";
}