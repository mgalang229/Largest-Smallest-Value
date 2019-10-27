#include <iostream>
using namespace std;

int main(){
	
	int val[] = {12,45,67,99,4}, num = val[0];
	
	cout << "\nThe values in the array: ";

	for(int i = 0; i < 5; i++){
		cout << val[i] << " ";
	}
	
	for(int i = 0; i < 5; i++){
		if(num < val[i]){
			num = val[i];
		}
	}
	
	cout << "\n\nThe Largest Value: " << num;
	
	for(int i = 0; i < 5; i++){
		if(num > val[i]){
			num = val[i];
		}
	}
	
	cout << "\n\nThe Smallest Value: " << num << endl;
	
	
	
	return 0;
	
}
