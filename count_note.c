// 13 .	Write a C program to count total number of notes in given amount.
#include<stdio.h>
 main()
{
    int amt,note2000=0,note500=0,note200=0,note100=0,note50=0,note20=0,note10=0,note5=0,note2=0;
    printf("Enter amount==");
     scanf("%d",&amt);
     if(amt>=2000)
  
     {
      note2000=amt/2000;
      amt=note2000%2000;
      // printf("2000*%d",note2000);
     }
      if (amt>=500)
 { 
      note500=amt/500;
      amt=note500%500; 
      //printf("500*%d",note500);
 }
 { 
      note100=amt/100;
      amt=note100%100; 
      //printf("500*%d",note500);
 }

{ 
      note50=amt/50;
      amt=note50%50; 
      //printf("500*%d",note500);
 }
{ 
      note20=amt/20;
      amt=note20%20; 
      //printf("500*%d",note500);
 }

{ 
      note10=amt/10;
      amt=note10%10; 
      //printf("500*%d",note500);
 }

{ 
      note5=amt/5;
      amt=note5%5; 
      //printf("500*%d",note500);
 }

{ 
      note2=amt/2;
      amt=note2%2; 
      //printf("500*%d",note500);
 }

{ 
      note200=amt/200;
      amt=note200%200; 
      //printf("500*%d",note500);
 }
printf("Total Number of notes==");
printf("2000=%d\n",note2000);
printf("2000=%d\n",note2000);
printf("2000=%d\n",note2000);
printf("2000=%d\n",note2000);





}