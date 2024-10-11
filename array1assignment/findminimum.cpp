// Find the minimum value out of all elements in the array
#include <iostream>
#include<climits>
using namespace std;
int main(){
int arr[5] = {6,2,3,4,5};
int min = INT_MAX;
for(int i=0;i<5;i++){
 if(min>arr[i]) min = arr[i];
 }
 cout << min;
return 0;
}