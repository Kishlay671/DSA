#include<stdio.h>
int main(){
    char s1[100],s2[100];
    int i,j;
    printf("Enter string s1: ");
    scanf("%s",&s1);
    printf("Enter string s2: ");
    scanf("%s",&s2);
    while(s1[i]!='\0')
    i++;
    while(s2[j]!='\0'){
        s1[i]=s2[j];
        j++;
        i++;
    }
    s1[i]='\0';
    printf("Concatenated string is %s",s1);
    return 0;
}