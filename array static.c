/Static memory allocation
#include<stdio.h>
#include<stdlib.h>
int size=20; //Initializing Size Of Array
int ne = 0; //Initializing Number of Elements in Array
//Function to read an Array
void read (int x[])
{
int i,n;
printf("Enter the number of elements \n");
scanf("%d", &n);
printf("Enter the elements into the array \n");
for (i=0; i<n;i++)
scanf("%d",&x[i]);
ne=n;
}
//Function to display an Array
void disp (int x[])
{
int i;
if (ne==0)
{
printf("Array empty\n");
return;
}
printf("The array elements you entered are : ");
for(i=0;i<ne;i++)
printf("%d ",x[i]);
printf("\n");
}
//Function to insert an element into Array at specified position
void insert_by_pos (int x[])
{
int i, pos, ele;
if(ne==size)
{
printf ("Array is full\n");
return;
}
printf("Enter the element to be inserted : \n");
scanf("%d", &ele);
printf("Enter the position where the element should be inserted\n");
scanf("%d", &pos);
if(pos>=1&&pos<=ne+1)
{
