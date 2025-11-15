#include<stdio.h>

void input(int*arr){
    int i;
    for(i=0;i<11;i++)scanf("%d", arr+i);
}

int main(){
    int runs[11], i,total=0, max=0, idx=0;
    float avg;

    input(runs);

    for(i=0;i<11;i++){
        total+=runs[i];
        if(runs[i]>max){
            max=runs[i];
            idx=i;
        }
    }

    avg=total / 11.0;

    printf("Total: %d\nAverage: %.2f\nHighest: %d at index %d", total, avg, max, idx);
}
