#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x=7;
    int idx=-1;
    bool flag=false;
    for (int i=0;i<=6;i++){
        if (arr[i]==x){
            idx=i;
        flag=true;
            break;
        }
    }
    if (flag==false){
        printf("%d is not present in the array%d",x,idx);
    }
    else{
        printf("%d is present in the array%d",x,idx);
    }
    return 0;
}