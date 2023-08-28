#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#include<alloc.h>

struct que
 {
  int info;
  struct que *next;
 };
typedef struct que queue;

queue* insertion(queue *front);
queue* deletion(queue *front);
void display(queue *front);

void main()
 {
  queue *front;
  int choice;
  front=NULL;
  while(1)
   {
    //clrscr();
    printf("\n\n\t\tThats the program of linear queue through LINKED LIST");
    printf("\n\n\t\t******************************************************\n\n");
    printf("\n\n\t\t\t------------------------------\n");
    printf("\n\n\t\t\t1. Insert the element OR");
    printf("\n\n\t\t\t2. Withdraw the element OR");
    printf("\n\n\t\t\t3. Display the contents OR");
    printf("\n\n\t\t\t4. Exit.");
    printf("\n\n\t\t\t------------------------------\n");
    printf("\n\n\n\n\t\tWhich operation you wanna to perform =");
    fflush(stdin);
    scanf("%d",&choice);
    switch(choice)
     {
      case 1: front=insertion(front);
	      break;
      case 2: front=deletion(front);
	      break;
      case 3: display(front);
	      break;
      case 4: printf("\n\n\n\n\t\t**You have successfully terminated from the program!!!**");
	      getch();
	      exit(0);
      default:printf("\n\n\n\n\t\tYour choice is not valid.");
	      printf("\n\n\t\tPress any key to rechoice.......");
	    //  getch();
	      continue;
     }
   }
 }

queue* insertion(queue *front)
 {
  queue *tmp,*tmp2;
 // clrscr();
  tmp=(queue*)malloc(sizeof(queue));
  printf("\n\n\t\tEnter the number to insert = ");
  scanf("%d",&tmp->info);
  tmp->next=NULL;
  if(front==NULL)
   {
    printf("\n\n\t\t**Your element has been successfully inserted.**");
    getch();
    return tmp;
   }
  else
   {
    for(tmp2=front;tmp2->next!=NULL;tmp2=tmp2->next);
    tmp2->next=tmp;
    printf("\n\n\t\t**Your element has been successfully inserted.**");
    getch();
    return front;
   }
 }

queue* deletion(queue *front)
 {
  queue *tmp;
  int num;
  //clrscr();
  if(front==NULL)
   {
    printf("\n\n\t\t**There is no element in the queue for deletion.**");
    getch();
    return front;
   }
  else
  if(front->next==NULL)
   {
    printf("\n\n\t\t**Your element has been successfully deleted.**");
    num=front->info;
    printf("\n\n\t deleted element is %d",num);
   // getch();
    return NULL;
   }
  else
   {
     num=front->info;
    printf("\n\n\t\t**Your element %d has been successfully deleted.",num);
  //  getch();
    return front->next;
   }
 }

void display(queue *front)
 {
  queue *tmp;
 // clrscr();
  if(front==NULL)
   {
    printf("\n\n\t\t**There is no element in the list for display**");
   // getch();
    return;
   }
  printf("\n\n\t\tYour element are as follows -- \n\n\t\t\t");
  for(tmp=front;tmp!=NULL;tmp=tmp->next)
   printf("\n\n\t\t\t%d",tmp->info);
 // getch();
 }
