#include<stdio.h>

int main(){
    int beds[3][5];
    int i,j,occ=0,empty=0;

    for(i=0;i<3;i++)
for(j=0;j<5;j++)
    scanf("%d",(*(beds+i)+j));

    for(i=0;i<3;i++)
for(j=0;j<5;j++)
    if(*(*(beds+i)+j)==1) occ++;else empty++;

    printf("Occupied:%d\nAvailable: %d\n",occ,empty);

    for(i=0;i<3;i++){
        for(j=0;j<5;j++)
            printf("%d",beds[i][j]);
        
    }
}
