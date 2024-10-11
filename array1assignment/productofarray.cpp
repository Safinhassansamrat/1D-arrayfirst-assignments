// Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    int arr[n];
    int pro = 1;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        pro*=arr[i];
    }
    cout<<"the product of all elements is : "<<pro;
}