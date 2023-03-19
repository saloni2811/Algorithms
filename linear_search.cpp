#include<bits/stdc++.h>
using namespace std;
int LinearSearch(int ar[],int target,int n){
    for(int i=0;i<n;i++){
        if(ar[i]==target)
        return i;
    }
    return -1;

}
int main(){
    int ar[]={34,24,14,89,90};
    int n= sizeof(ar)/sizeof(int);
    int target;
    cout<<"enter target value: ";
    cin>>target;
    int result=LinearSearch(ar,target,n);
    if(result!=-1)
    cout<<"The element is in the array: "<<result;
    else
    cout<<"The result is not in the array.";
    return 0;
}