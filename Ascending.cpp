#include<iostream>
using namespace std;
int main ()
{
    cout<<"Declare the total numbers of your input :  ";
    int i,j,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[j+1]<arr[j]){
                int temp1 = arr[j];
                int temp2 =arr[j+1];
                arr[j+1]=temp1;
                arr[j]=temp2;
            }
        }
    }
    cout<<"Sorted array :"<<endl;
    for (i=0;i<n;i++){
        cout<<arr[i]<<" ";


    }





}
