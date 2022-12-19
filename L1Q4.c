#include <iostream>
using namespace std;

 

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

 

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]>=0){
            int key = arr[i];
            int j = i-1;

            while(j>=0 && arr[j]>key){
                arr[j+1] = arr[j];
                j = j-1;
            }
            arr[j+1] = key;
        }
        else{
            int key = arr[i];
            int j = i-1;

            while(j>=0 && arr[j]<key){
                arr[j+1] = arr[j];
                j = j-1;
            }
            arr[j+1] = key;
        }
        }


    print(arr,n);

}

 

int main() {
    int n =5;
    int arr[n];
    arr[0] = -7;arr[1] = -3;arr[2] =2;arr[3] =4; arr[4]=0;
    insertionSort(arr,n);
    return 0;
}
