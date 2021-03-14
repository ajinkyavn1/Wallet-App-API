#include<iostream>
#include<climits>
// #include<climits.h>
using namespace std;
void binary(int arr[],int n,int key)
{
    int LB=0;
    int UB=n-1;
    while (LB<=UB)
    { 
        int mid=(LB+UB)/2;
        if(arr[mid]==key)
        {
            
        }
        else
            if(arr[mid]>key){
                 UB=mid-1;
            }
        else{
            LB=mid+1;
            }
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    int key;
    cin>>key;
   
    binary(arr,n,key);
   
       return 0;
}