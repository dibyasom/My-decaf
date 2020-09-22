#include<stdio.h>
#include<limits.h>

typedef long long int ll;

ll lapindrome(){
	int n, at_max = 0;
	ll maxSpd = LLONG_MAX; scanf("%d", &n);
	ll cars[n];

	for(int i=0; i<n; i++)
		scanf("%lld", &cars[i]);
	
	for(int i=0; i<n; i++)
		if(cars[i] <= maxSpd){
			maxSpd = cars[i];
			at_max ++;
		}

	return at_max;
}

int main(void){
	int t; scanf("%d", &t);
	while(t--)
		printf("%lld\n", lapindrome());

	return 0;
}