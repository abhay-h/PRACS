//Create a random array of n integers. Accept a value x from user and check whether the number is present in the array or not and output the position if the number is present. 

#include<stdio.h>
#include<stdlib.h> // for using random function rand()


int linear_search(int a[], int n, int sr) { // linear search algorithm
  int i;
  for (i = 0; i < n; i++) {
    if (a[i] == sr)
      return i;
  }
  return -1;
}

void generate(int a[], int n) { // to generate random array of numbers
  int i;
  for (i = 0; i < n; i++)
    a[i] = rand() % 20;
}

void display(int a[], int n) { // to display the  random array of numbers
  int i;
  for (i = 0; i < n; i++) {
    printf("%d\t", a[i]);
  }
}


int main() {
  int a[20], i, j, n, x, ans;

  printf("\n Enter how many elemants:");
  scanf("%d", & n);

  generate(a, n); // random number generator
  printf("\n Elements are:\n");

  display(a, n); 

  printf("\n Enter searching element : ");
  scanf("%d", & x);

  ans = linear_search(a, n, x);//performing linear search

  if (ans == -1)
    printf("\n %d is NOT found.", x);
  else
    printf("\n %d is found at %d position\n", x, ans + 1);
}