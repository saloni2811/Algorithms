
#include<bits/stdc++.h>
 
using namespace std;
 
//member functions declaration
//void insertionSort(int arr[], int length);
//void printArray(int array[], int size);
 
// main function

 
void insertionSort(int array[], int length) 
{
	int i, j, key;
	for (i = 1; i < length; i++) 
	{
		j = i;
 		while (j > 0 && array[j - 1] > array[j]) 
 		{
 			key = array[j];
 			array[j] = array[j - 1];
 			array[j - 1] = key;
 			j--;
 		}
	}
	
	
}

// function to print the given array 
void printArray(int array[], int length)
{ 
	cout<<"Sorted Array: ";  
 	int j;
	for (j = 0; j < length; j++)
	{
 		cout << array[j]<<" ";
 	}
 	cout << endl;
}
int main() 
{
	int array[] = {5, 1, 6, 2, 4, 3};
    int length= sizeof(array)/sizeof(int);
	// calling insertion sort function to sort the array
	insertionSort(array, length);
    printArray(array, length);
	return 0;
}