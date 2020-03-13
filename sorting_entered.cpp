#include <bits/stdc++.h>
#include <iostream> 
using namespace std; 

class Sort
{
public:
    void selectionSort(int arr[], int n)  
    {  
        int i, j, min_idx;  
      
        for (i = 0; i < n-1; i++)  
        {  

            min_idx = i;  
            for (j = i+1; j < n; j++)  
            if (arr[j] < arr[min_idx])  
                min_idx = j;  
       
            swap(&arr[min_idx], &arr[i]);  
        }  
    } 
    

    void insertionSort(int arr[], int n)  
    {  
        int i, key, j;  
        for (i = 1; i < n; i++) 
        {  
            key = arr[i];  
            j = i - 1;  
      
            while (j >= 0 && arr[j] > key) 
            {  
                arr[j + 1] = arr[j];  
                j = j - 1;  
            }  
            arr[j + 1] = key;  
        }  
    } 


    void bubbleSort(int arr[], int n)  
    {  
        int i, j;  
        for (i = 0; i < n-1; i++)      
          
        for (j = 0; j < n-i-1; j++)  
            if (arr[j] > arr[j+1])  
                swap(&arr[j], &arr[j+1]);  
    }

    void swap(int *xp, int *yp)  
    {  
        int temp = *xp;  
        *xp = *yp;  
        *yp = temp;  
    }

};

void printArray(int arr[], int size)  
    {  
        int i;  
        for (i=0; i < size; i++)  
            cout << arr[i] << " ";  
        cout << endl;  
    } 
int main()  
{  
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }  
    Sort s; 
    s.selectionSort(arr, n); 
    cout << "Sorted array using Selection Sort: \n";  
    printArray(arr, n);  
    s.insertionSort(arr, n); 
    cout << "Sorted array using Insertion Sort: \n";  
    printArray(arr, n); 
    s.bubbleSort(arr, n); 
    cout << "Sorted array using Bubble Sort: \n";  
    printArray(arr, n); 
    return 0;
} 