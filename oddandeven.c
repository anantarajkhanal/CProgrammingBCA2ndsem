#include<stdio.h>

char option;
int main(){

int input;

do{
    printf("enter a number\n");

scanf("%d",&input);

int checker= input%2;

if(checker==0){
    printf("it is an even number\n");
}else{
    printf("it is an odd number\n");
}

printf("do you want to continue\n");
printf("press y for continue and any other key for exit\n");


scanf(" %c",&option);  


}while(option=='y'|| option=='Y');





return 0;    
  }