#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int ar[],int n){
    int a;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(ar[j]>ar[j+1]){
                a=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=a;
            }
        }
        
    }
    cout<<"Sorted Array: "<<endl;
   for(int i=0;i<ar[i];i++){
    cout<<ar[i]<<" ";
   }
}
int main(){
    int ar[]={5,1,6,2,4,3};
    int n=sizeof(ar)/sizeof(int);
    BubbleSort(ar,n);


}