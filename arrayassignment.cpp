#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[8]={1,2,3,4,5,4,2,4};
    /*int max;
    max=arr[0];
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }*/
    int sr[]={3,5,21,52,2};
    cout<<sizeof(sr)/sizeof(sr[0]);   
    cout<<sizeof(arr);   
}