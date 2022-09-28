#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int mutex=1,full=0,empty=3,x=0;
int main()
{
int n;
void producer();
void consumer();
int wait(int);
int signal(int);
printf("\n 1.producer \n 2.consumer \n 3.exit");
while(1)
{
printf("\n enter your choice:");
scanf("%d",&n);
switch(n)
{
case 1:
if((mutex==1)&&(empty!=0))
producer();
else
printf("buffer is full");
break;
case 2:
if((mutex==1)&&(full!=0))
consumer();
else
printf("buffer is empty");
break;
case 3:
exit(0);
break;
}
}
}
int wait(int s)
{
return(--s);
}
int signal(int s)
{
return(++s);
}
void producer()
{
mutex=wait(mutex);
full=signal(full);
empty=wait(empty);
x++;
printf("\n producer produces the item %d",x);
mutex=signal(mutex);
}
void consumer()
{
mutex=wait(mutex);
full=wait(full);
empty=signal(empty);
printf("\n consumer consumes item %d",x);
x--;
mutex=signal(mutex);
}





//OUTPUT:
//Enter the number of memory partitions:3
//Enter the number of process: 2
//Enter the memory partition size 1: 242
//Enter the memory partition size 2: 200
//Enter the memory partition size 3: 350
//Enter the page size 1: 100
//Enter the page size 2: 300
//Enter the page size 3: 150
//1. first fit
//2. best fit
//3. worst fit
//Enter your choice: 1