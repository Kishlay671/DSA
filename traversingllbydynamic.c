#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};
int print(struct node *ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->info);
        ptr=ptr->link;
    }
}
int main(){
    struct node*T=malloc(sizeof(struct node));
    struct node*T1=malloc(sizeof(struct node));
    struct node*T2=malloc(sizeof(struct node));
    struct node*T3=malloc(sizeof(struct node));

    T->info=10;
    T1->info=10;
    T2->info=10;
    T3->info=10;

    T->link=T1;
    T1->link=T2;
    T2->link=T3;
    T3->link=NULL;
    struct node*start=&T1;
    printf(&T1);
    }