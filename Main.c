#include <stdio.h>
int main(){
	int arr[]={3, 3, 4, 2, 4, 4, 2, 4, 4};
	int max=0;
	int element;
	for(int i=0;i<sizeof(arr) / sizeof(arr[0]);i++){
		int count = 1;
		for(int j=i+1;j<sizeof(arr) / sizeof(arr[0]);j++){
			if(arr[i]==arr[j]) count++;
		}
		if(count > max){
		    max = count;
		    element = arr[i];
		} 
	}
	if(max > (sizeof(arr) / sizeof(arr[0]))/2){
	    printf("Majority element: %d", element);
	} 
	else {
	    printf("No Majority element.");
	}
	return 0;
}
