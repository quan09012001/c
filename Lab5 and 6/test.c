#include <stdbool.h>
#include<stdio.h>

int main(void){
    bool a = true;
    if(a){
        printf("a %d\n",a);
    }
    a=false;
    if(!a){
        printf("!a %d\n", a);
    }
    if(1){
        printf("1 %d\n", a);
    }
    if(3){
        printf("3 %d",a);
    }
    return 0;
         
}