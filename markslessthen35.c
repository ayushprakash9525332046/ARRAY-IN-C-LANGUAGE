#include<stdio.h>
int main(){
    int a[10];
    for (int i=0;i<10;i++){
        printf("student marks:\n");
        scanf("%d",&a[i]);
    }
    for (int i=0;i<10;i++){
        if  (a[i]<35){
            printf("student marks less then roll no %d \n",i);
        }
    }
}