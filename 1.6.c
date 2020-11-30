//WAP to calculate Simple Interest
#include <stdio.h>

int main(void) {
	int principal = 100;
	float ROI = 4;
	int year = 1;
	float SI = principal*ROI/100*year;
	printf("The Simple Interest is %f",SI);
	return 0;
}

