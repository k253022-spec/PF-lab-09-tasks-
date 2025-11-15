#include<stdio.h>

int main(){
    int arr[3][3],i,j,key;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    scanf("%d",(*(arr+i)+j));

    scanf("%d",&key);

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    if(*(*(arr+i)+j)==key){
        printf("Found at row %d column %d", i, j);
        return 0;
            }

    printf("Not found");
}
