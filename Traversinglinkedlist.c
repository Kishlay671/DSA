//TRAVERSING LINKED LIST BY STATIC METHOD
#include<stdio.h>
struct node{
    int info;
    struct node *link;
}n1,n2,n3,n4;

int print(struct node *ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->info);
        ptr=ptr->link;
    }
}
int main(){
    n1.info=10;
    n2.info=20;
    n3.info=30;
    n4.info=40;

    n1.link=&n2;
    n2.link=&n3;
    n3.link=&n4;
    n4.link=NULL;
    struct node*start=&n1;
    print(&n1);
}