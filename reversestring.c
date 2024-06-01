#include<stdio.h>
int main(){
    char str[]="hello";
    char rev[100];
    int i,l;
    for(l=0;str[l]!='\0';l++){
        for(i=0;i<l;i++){
            rev[i]=str[l-i-1];
        }
        rev[l]='\0';
    }
    printf("Reversed string is %s\n",rev);
    return 0;
}