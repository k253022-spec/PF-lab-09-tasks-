#include<stdio.h>

void printData(void *ptr,char type){
    if(type=='i')printf("%d",*(int*)ptr);
    else if(type=='f')printf("%.2f",*(float*)ptr);
    else if(type=='c')printf("%c",*(char*)ptr);
}

int main(){
    int id=10;
    float price = 99.5;
    char cat='A';

    printData(&id,'i');printf("\n");
    printData(&price,'f');printf("\n");
    printData(&cat,'c');
}
