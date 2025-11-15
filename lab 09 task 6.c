#include<stdio.h>

int main(){
    int att[4][5];
    int i,j;
    float percent;

    for(i=0;i<4;i++)
    for(j=0;j<5;j++)
    scanf("%d", &att[i][j]);

    for(i=0;i<4;i++){
        int sum=0;
        for(j=0;j<5;j++)sum+=att[i][j];
        percent=(sum/5.0)*100;
        printf("Student %d: %.2f%%", i+1, percent);
        if(percent<75) printf(" Warning");
        printf("\n");
    }
}
