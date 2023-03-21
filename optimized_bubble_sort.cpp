#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int ar[], int n)
{
    int a, flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(ar[j]>ar[j+1]){
                a=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=a;
                flag=1;
            }

        }
        if(flag==0){
            break;
        }


    }
    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<ar[i];i++){
        cout<<ar[i]<<" ";
    }
    
}
int main()
    {
        int ar[]={5,2,6,1,4,3};
        int n=sizeof(ar)/sizeof(int);
    bubbleSort(ar,n);

    }