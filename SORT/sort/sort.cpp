#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    int arr[5]={5,9,4,7,2};
    sort(arr,arr+5);
    for(int i=0;i<5;i++)cout<<arr[i];
}