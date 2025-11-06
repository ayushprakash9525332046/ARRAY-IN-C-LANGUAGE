#include<stdio.h>
int main(){
    int a[8]={1,2,3,4,5,6,7,8};
    int x=3;
    int count=0;
    for(int i=0;i<=7;i++){
        
        if (a[i]>x){
            count++;
        }
        
    }
   printf("greter is %d ", count);
    return 0;
}