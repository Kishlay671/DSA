#include<stdio.h>
int main(){
    int arr[]={58,33,35,1,44,36,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Elements of array in sorted form is ");
    for(int k=0;k<size;k++){
        printf("%d  ",arr[k]);
    }
    return 0;
}