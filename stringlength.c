#include<stdio.h>
int main(){
    char str[]="Hello World";
    int l,count=0;
    for(l=0;str[l]!='\0';l++){
        count+=1;
    }
    printf("Length of string is %d",count);
    return 0;
}