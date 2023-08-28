#include<stdio.h>
#include<conio.h>
#define size 100

int front = 0;
int rear = 0;
int queue[size];

void insertion();
void deletion();
void display();

int main()
 {
 // clrscr();
  while(1)
   {
  //  clrscr();
    int choice;
    printf("\n\n\t\t The program of linear queue through ARRAY");
    printf("\n\t\t(MAX Size = 100)\n\n\n\n");
    printf("\n\n\t\t1. Insert the element OR");
    printf("\n\n\t\t2. Withdraw the element OR");
    printf("\n\n\t\t3. Display the contents OR");
    printf("\n\n\t\t4. Exit.");
    printf("\n\n\n\n\t\tWhich operation you want to perform =");
    fflush(stdin);
    scanf("%d",&choice);
    switch(choice)
     {
      case 1: insertion();
	      break;
      case 2: deletion();
	      break;
      case 3: display();
	      break;
      case 4: printf("\n\n\n\n\t\tYou have successfully terminated from the program.");
	      getch();
	   //   exit(0);
      default:printf("\n\n\n\n\t\tYour choice is not valid.");
	      printf("\n\n\t\tPress any key to rechoice.......");
	     // getch();
	      continue;
     }
   }
 }

void insertion()
 {
  int num;
 // clrscr();
  if(rear==size)
   {
    printf("\n\n\t\t Array/Queue is FULL .......");
    printf("\n\n\t\t Please first delete some element then try again.");
    //getch();
   }
  else
   {
    printf("\n\n\t\tEnter the number to insert = ");
    scanf("%d", &num);
    queue[rear]=num;
    rear++;    
    printf("\n\n\t\t Your element has been successfully inserted.");
   // getch();
   }
 }

void deletion()
 {
  int num;
 // clrscr();
  if(front==rear)
   {
    printf("\n\n\t\t There is no element in the queue");
    printf("\n\n\t\t Please insert some element and then try again.");
   // getch();
    return;
   }
  else
   {
     num =queue[front];
printf("\n\n\t\t Your element %d has been successfully deleted.", num);
	front++;    
    // getch();
    return;
   }
 }

void display()
 {
   int i;
  for(i=front;i<rear;i++)
   printf("\n\t\t\t%d",queue[i]);
  //getch();
 }
