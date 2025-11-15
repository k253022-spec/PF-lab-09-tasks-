#include <stdio.h>

void deposit(float *bal, float amt){ *bal += amt; }
void withdraw(float *bal, float amt){ *bal -= amt; }

int main(){
    float acc[5];
    int i;
    float avg=0;

    for(i=0;i<5;i++) scanf("%f", &acc[i]);

    deposit(&acc[0], 500);
    withdraw(&acc[1], 200);

    for(i=0;i<5;i++) avg += acc[i];
    avg /= 5;

    printf("Average Balance: %.2f", avg);
}
