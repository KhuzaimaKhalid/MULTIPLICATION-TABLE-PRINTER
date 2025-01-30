#include<stdio.h>

int main()
{
  printf("\t MULTIPLICATION TABLE PRINTER \n");
  int n,num = 0;
  printf("\nenter the no of table: ");
  scanf("%d", &n);
  printf("enter the no of times of table: ");
  scanf("%d", &num);
  int arr[num];
  for(int i = 0; i < num; i++){
  	arr[i] = n * (i+1);
  }
	for(int i = 0; i < num; i++){
  printf("%d x %d = %d \n",n,i+1,arr[i]);
  }	
	
	
	
	
	return 0;
}
