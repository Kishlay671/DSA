#include<stdio.h>
int main(){
    int arr[]={12,13,14,15,16,17,100,18,20,25,92,100};
    int target=100;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("Element found at Index %d",i);
            return i;
            }
    }
    printf("Element not found");
    return 0;
}