#include <stdio.h>
#include <stdlib.h>
//this question follow greedy naturally 
//measn we no need to explicitly choose maximum it choose automaitcally
//beacuse when we go high bit to  lower bit it choose maximum ot minimum

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n,k;
	scanf("%d %d", &n, &k);
	int arr[n]; 
	for(int i = 0; i < n;i++) scanf("%d", arr + i);
	for(int i = 30 ; i >= 0 ; i--){
		int cost = 0;
		for(int j = 0 ; j < n; j++) if(!(arr[j] & (1 << i))) cost++; // will check set bit count
		if(cost <= k) {
			k = k -cost;
			for(int j = 0;j < n; j++){
				arr[j] |= 1 << i;
			}
		}
	}		
	int ans = arr[0];
	for(int i  = 1; i < n; i++) ans &= arr[i];
	printf("%d\n", ans);
	}
}