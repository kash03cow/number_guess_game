#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <Windows.h>

#define true false

int main(){
    int num,guess;
    srand(time(0));
    
    num= rand()%100+1;

        for(int i=1;i<=10;i++){
            printf("Guess the number: ");
            scanf("%d",&guess);
            if(guess==num){
                printf("Congratulations, you have guessed the number");
                Sleep(5);
                break;}
            else if(guess>num){
                printf("The number is lower\n");}
            else{
                printf("The number is higher\n");}
        printf("%d TRIES LEFT\n",10-i);
        }
        
    return 0;
}