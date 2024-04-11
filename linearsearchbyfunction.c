#include<stdio.h>
int LinearSearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
            break;
        }
    }
    return -1;
}
int main(){
    int arr[]={33,58,70,33,34,35,65};
    int n=sizeof(arr)/sizeof(arr[0]);
    int element;
    printf("Enter an element: ");
    scanf("%d",&element);
    int result=LinearSearch(arr,n,element);
    if(result !=-1){
        printf("Element found at Index %d",result);
        }
    else{
        printf("Element not found");
    }
    return 0;
}