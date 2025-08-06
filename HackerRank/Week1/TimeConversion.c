#include<stdio.h>
#include<string.h>

int main() {
    char t[11];
    scanf("%s", t);
    
    
int hour=(t[0]-'0')*10+(t[1]-'0');
    
    if(t[8]=='A')
    {
       if(hour==12)
       hour=0;
        
    }
    else if(t[8]=='P')
    {
        if(hour !=12) 
        hour=hour+12;
    } 


    printf("%02d:%c%c:%c%c\n", hour,t[3],t[4],t[6],t[7]);
    return 0;
    }
