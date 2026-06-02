#include<iostream>
using namespace std;

int main(){
    int arr[7]={2,5,7,9,11,13,15};
    int target=22;
    int i,j,sum,first,second;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++){
        first=arr[i];
        for(j=i+1;j<n;j++){
            second=arr[j];
            sum=first+second;
            if(sum==target){
                cout<<arr[i]<<endl;
                cout<<arr[j]<<endl;
            }
            
        }
    }
    return 0;
    }
  