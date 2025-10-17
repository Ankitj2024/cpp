
#include <iostream>
using namespace std;
int main() {
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int i=0,j=8;
    int n;
    cin>>n;
    while(i<=j){
        int m=(j-i)/2+i;
        if(m==n){
            cout<<"found";
            return 0;
        }
        if(arr[m]>n){
            j=m-1;
        }else{
            i=m+1;
        }
    }
    cout<<"not found";
    return 0;
}