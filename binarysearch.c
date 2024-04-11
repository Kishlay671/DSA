#include<stdio.h>
int main(){
    int i,n,low,high,mid,key;
    printf("Enter number of elements in an Array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter searching element: ");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(key==arr[mid]){
        printf("%d found at location %d",key,mid);
        break;
        }
        else if(key<arr[mid]){
            high=mid-1;
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
        else{
            printf("Element not found");
        }
    }
    return 0;
}