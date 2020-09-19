#include<stdio.h>

long totalBill(int*, int);

long totalBill(int* bill, int n){
	long sum = 0;
	for(int i=0; i<n; i++)
		sum += bill[i];
	return sum;
}

void bonAppetit(){
	int n,k; long share; scanf("%d %d", &n, &k);
	int bill[n];
	for(int i=0; i<n; i++)
		scanf("%d", &bill[i]);
	scanf("%ld", &share);
	long totBill   = totalBill(bill, n);
	long currShare = (totBill-bill[k])/2;
	int fairSplit  = (share == currShare) ?1 :0;

	if(fairSplit)
		printf("Bon Appetit\n");
	else
		printf("%ld\n", (share - currShare));
}
int main(void){
	bonAppetit();
	return 0;
}