#include<stdio.h>

void dayOfProgrammer(int year){

	int dd = 13; char* mm = "09";
	if(1700 <= year <= 2700){
		if(year < 1918)
			dd -= (year%4 == 0) ?1 :0;
		else if(year > 1918)
			dd -= (year%400 == 0 || (year%4 == 0 
								 &&  year%100)) ?1 :0;
		else
			dd += 13;
	}
	printf("%d.%s.%d\n", dd, mm, year);
}

int main(void){
	int year; scanf("%d", &year);
	dayOfProgrammer(year);

	return 0;
}