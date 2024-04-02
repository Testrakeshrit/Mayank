#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
void insertion(int item,int a[],int n){
    int c,p;
    if(n==MAXSIZE -1) {
        printf("the heap is full");
        return;
    }
    c=n;
    p=(c-1)/2;
    while(c!=0 && item>a[p]){
        a[c]=a[p];
        c=p;
        p=(c-1)/2;
    }
    a[c]=item;
    return ;
}
void display(int a[],int n){
    if(n==0){
        printf("heap is empty\n");
        return;
    }
    printf("the array element are");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    }
int main(){
    int a[MAXSIZE],n=0,ch ,item;
    for(;;){
        printf("1.insert 2.display 3.exit");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("enter an element:");
            scanf("%d",&item);
            n=insertion(item,a,n);
            break;
            case 2:display(a,n);
            break;
            default:exit(0);
            }
        }
        return 0;
            }