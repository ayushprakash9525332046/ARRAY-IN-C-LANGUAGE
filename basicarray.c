#include<stdio.h>
int main(){
    int a[5];
    for (int i=0;i<=4;i++){
        printf("enter element number\n :");
        scanf("%d",&a[i]);

    }
    for (int i=0;i<=4;i++){
        printf("%d ",a[i]);
    }
}