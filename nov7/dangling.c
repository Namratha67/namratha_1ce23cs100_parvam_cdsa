#include<stdio.h>
int main(){
    int *add(){
        int a=5;
        return &a;
    }
    int main(){
        int a=5;
        int*c=add();
        printf("%d",c)
    }
}