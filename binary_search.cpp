#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int ar[],int target,int n){
    int a=n;
    int b=0;
    int guess;
    int step=0;
    while(a>=b){
        guess=(a+b)/2;
        step++;

        if(ar[guess]==target){
        cout<<"Maximum number of steps: "<<step;
        return guess;
        }

        else if(ar[guess]>target){
        a=(guess-1);
        }

        else{
        b=guess+1;
        }

    }
    return -1;
}


int main(){
    int ar[]={34,9,45,78,90};
    int target;
    cout<<"Enter target value: ";
    cin>>target;
    int n= sizeof(ar)/sizeof(int);
    sort(ar,ar+n);
    int result= BinarySearch(ar,target,n);
    if(result!=-1)
    cout<<endl<<"The value is in the array: "<< result;
    else
    cout<<"The value is not in the array.";
    return 0;
    }