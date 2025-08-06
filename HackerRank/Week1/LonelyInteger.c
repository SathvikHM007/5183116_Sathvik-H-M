#include<stdio.h>

int main(){
    int a,b, result=0;
    scanf("%d", &a);
    
    for(int i=0;i<a;i++)
    {
        scanf("%d", &b);
        result=result^b;
    }
    
    printf("%d\n", result);
    return 0;
    }
