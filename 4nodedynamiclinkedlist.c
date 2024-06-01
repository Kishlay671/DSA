#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node* link;
};
int main(){
    struct node* temp=malloc(sizeof(struct node));
    struct node* temp1=malloc(sizeof(struct node));
    struct node* temp2=malloc(sizeof(struct node));
    struct node* temp3=malloc(sizeof(struct node));
    temp->info=10;
    temp1->info=20;
    temp2->info=30;
    temp3->info=40;

    temp->link=temp1;
    temp1->link=temp2;
    temp2->link=temp3;
    temp3->link=NULL;
    struct node* strat=temp;

    printf("%d\n",temp->info);
    printf("%d\n",temp1->info);
    printf("%d\n",temp2->info);
    printf("%d",temp3->info);
    return 0;
}