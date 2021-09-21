#include<stdio.h>

struct struc{
    int num;
};

int main(){

    struct struc var = {55};

    struct struc* pointer = &var;
    
    printf("%d",pointer->num);

    return 0;
}