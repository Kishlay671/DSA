#include<stdio.h>
int main(){
    char str1[50],str2[50];
    int i=0,j=0;
    printf("Enter first string: ");
    fgets(str1,50,stdin);
    printf("Enter second string: ");
    fgets(str2,50,stdin);
    while(str1[i]!='\0')
    i++;
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        j++;
        i++;
    }
    str1[i]='\0';
    printf("Concatenated string is %s",str1);
    return 0;
}