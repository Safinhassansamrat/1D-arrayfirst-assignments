// WAP to find the smallest missing positive element in the sorted Array that contains only positive
// elements.
#include<iostream>
using namespace std;
int main() {
 int n;
 cout<<"enter the size of array : ";
 cin>>n;
 int arr[n];
 for(int i = 0;i<n;i++) cin>>arr[i];
 bool flag = false;
 for(int i = 0;i<n;i++){
   if(arr[i]!=i+1){
    flag = true;
    cout<<"the missing positive element is : "<<i+1;
    break;
   }
   
 }
 if(flag==false) cout<<"there is no missing element";
}