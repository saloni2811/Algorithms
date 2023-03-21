#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[])
{
    for(int i=0;i<4;i++){
        int min=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
                 
    }
}

int main()
{
    int ar[5];
    cout<<"Enter 5 integers: ";
    for(int i=0;i<5;i++){
        cin>>ar[i];
    }
    cout<<endl;

    cout<<"Unsorted Array: ";
    for(int i=0;i<5;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;

    selectionSort(ar);

    cout<<"Sorted Array: ";
    for(int i=0;i<5;i++){
        cout<<ar[i]<<" ";
    }

    return 0;
}