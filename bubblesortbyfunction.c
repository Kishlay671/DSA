#include<stdio.h>
int BubbleSort(int arr[],int size){
    int i,j;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];//swapping
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[]={33,70,58,1,10,22,30};
    int size=sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,size);
    printf("Elements of array in sorted form is ");
    for(int k=0;k<size;k++){
        printf("%d  ",arr[k]);
    }
    return 0;
}