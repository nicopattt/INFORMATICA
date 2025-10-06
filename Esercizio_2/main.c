#include <stdio.h>

int main(){
	
	int a=10, b=20, tmp;
	int *ptr1 = &a;
	int *ptr2 = &b;
	
	printf("%d, ", *ptr1);
	printf("%d\n", *ptr2);
	
	tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
	
	printf("%d, ", *ptr1);
	printf("%d", *ptr2);
	
	return 0;
}