#include<stdio.h>
#include<string.h>
void main(){
    char result[10];
    int state=0;
    printf("Enter the string: ");
    scanf("%s",result);
    for(int i = 0;i<strlen(result);i++){
        if(state==0 && result[i]=='a'){
            state = 1;
            continue;
        }
        if(state==0 && result[i]=='b'){
            state = 3;
            continue;
        }
        if(state==1 && result[i]=='a'){
            state = 0;
            continue;
        }
        if(state==1 && result[i]=='b'){
            state = 2;
            continue;
        }
        if(state==2 && result[i]=='a'){
            state = 3;
            continue;
        }
        if(state==2 && result[i]=='b'){
            state = 1;
            continue;
        }
        if(state==3 && result[i]=='a'){
            state = 2;
            continue;
        }
        if(state==3 && result[i]=='b'){
            state = 0;
            continue;
        }
    }
    if(state==0){
        printf("String given belongs to the language\n");
    }
    else{
        printf("String given does not belong to the language\n");
    }
}