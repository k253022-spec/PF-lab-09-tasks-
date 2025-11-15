#include<stdio.h>

int isVowel(char c){
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
           c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
}

int main(){
    char arr[3][20];
    int i,j;

    for(i=0;i<3;i++)scanf("%s",arr[i]);

    for(i=0;i<3;i++)
        for(j=0;arr[i][j]!='\0';j++)
    if(isVowel(arr[i][j])) arr[i][j]='*';

    for(i=0;i<3;i++) printf("%s\n", arr[i]);
}
