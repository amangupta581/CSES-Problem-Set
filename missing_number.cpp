#include<iostream>
using namespace std;
int missing_number(int a[],int n){
    int i,total = (n+1)*(n+2)/2;
    for(i=0;i<=n;i++)
        total=total-a[i];
        return total;
    
}
int main()
{
    int arr[] = {1,2,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int miss = missing_number(arr, n);
    cout<< miss;
}
  
