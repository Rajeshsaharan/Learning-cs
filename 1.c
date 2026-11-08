#include <stdio.h>


int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	int i = 0;
	while(n--){
		scanf("%d", arr+i);
		i++;
	}
	n = i;
	int found = 0;
	for(int mask = 0; mask < (1 << n) ; mask++){
		int total = 0;
		for(int i = 0; i < n; i++){
			if(mask & ( 1 << i)) total -= arr[i];
			else total += arr[i];
		}
		if(total % 360 == 0){
			found = 1;
			break;
		}
	}
	if(found) printf("%s\n", "YES");
	else printf("%s\n", "NO");
}
