#include<stdio.h>
#define Arr_Size 1000

void linear_search(int [],int,int);
void main()
{
int stArray[Arr_Size] ,ReqElem,Arr_Req;

printf("\nEnter the size of array:");
scanf("%d",&Arr_Req);
printf("\nEnter the elements of array:");
for(int i=0;i<Arr_Req;i++)
scanf("%d",&stArray[i]);
printf("\nEnter the element which u want to searched:");
scanf("%d",&ReqElem);
linear_search(stArray,Arr_Req,ReqElem);
}

void linear_search(int stArray[Arr_Size],int n,int ReqElem)
{
   int i,flag;
  for(i=0;i<n;i++)
   {
  if(stArray[i]==ReqElem)
   {
	flag=1;
	break;
   }
}
if(flag==1)
   printf("%d is found at position %d",ReqElem,i+1);
   else
printf("%d is not found",ReqElem);
}

   

