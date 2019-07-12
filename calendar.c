#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int first_day, day, all_days, i, j, k, N, number2, number3, number4, n, number5;
	printf("How many days does this month have?");
	scanf ("%d",&all_days);
	printf("Which day is the first of the month?\n");
	printf("put 1 for Monday, 2 for Tuesday, 3 for Wednesday, 4 for Thursday, 5 for Friday, 6 for Saturday and 7 for Sunday\n");
	scanf ("%d",&first_day);
	while (first_day<1 || first_day>7) {
	    printf("Selection Error. Choose Again.");
	    scanf ("%d",&first_day);
	}	  
	printf ("Mo\tTu\tWe\tTh\tFr\tSa\tSu");
	printf ("\n");			
	i=1;
	while (i<=first_day-1){
		printf ("\t");	
		i++;
	}			
	j=1;	
	while (j<=8-first_day){
			printf("%d\t",j);
			j++;
	}
	printf("\n");   // end of first line	
	k=0;
	day=0;
	while (day<=all_days-1){
		day=j+k;
		printf("%d\t",day);
		k++;
		if (k%7==0){			
			printf("\n");
		}
	}
	
	return 0;
}
