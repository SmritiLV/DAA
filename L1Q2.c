#include <stdio.h>

 

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
//linear search
void position1(int arr[],int k,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            printf("\nk position with c1: %d",i+1);
        }
    }
}
//binary search
void position2(int arr[],int k,int l,int r){
    int q = (l+r)/2;
    if(arr[q]==k){
        printf("\nk position with c2: %d",q+1);
    }else if(arr[q]>k){
        position2(arr,k,l,q-1);
    }else{
        position2(arr,k,q+1,r);
    }
}
//insertion sort
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }

    print(arr,n);
    position1(arr,2,n);
    position2(arr,2,0,n);

}
int main() {
    int n =5;
    int arr[n];
    arr[0] = 89;arr[1] = 65;arr[2] =70;arr[3] =32; arr[4]=2;
    insertionSort(arr,n);
    return 0;
}
