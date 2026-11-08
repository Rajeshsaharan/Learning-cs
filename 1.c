#include <stdio.h>

<<<<<<< HEAD
int ** generate_all_subsets_using_bitmasking(int * arr, int n){
	//possible subset of an array of size n 
  	int cap = 1 << n;
    int ** result = malloc(sizeof(int*) * cap);	   
    for (int mask = 0; mask < cap ; mask++){
	      result[mask] = malloc(sizeof(int) * n);
        int k = 0;
        for(int i = 0; i < n; i++){
			      if(mask & ( 1 << i)){
              result[mask][k++] = arr[i];				
			}	
		}	
	}
}
int main(){
  int arr[] = {1,2,3};
  int size = sizeof(arr)/ sizeof(arr[0]);
  int ** result = generte_all_subsets_using_bitmasking(arr, size);
  return 0; 
}
=======
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
>>>>>>> 99f17b1 (bitmasking)
