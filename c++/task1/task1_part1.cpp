#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<string> array = {"L68","L30","R48","L5","R60","L55","L1","L99","R14","L82"};

	long long count0 = 0;

	int currentNumber = 50;

	for (long long i = 0; i < array.size(); i++){
  char direction = array[i][0];
		long long number = stoll(array[i);

		if (direction == 'L'){
			currentNumber = abs(currentNumber-number) % 100;
		} else{
			currentNumber = (currentNumber+number) % 100;
		}

		if (currentNumber == 0){
			count0++;
		
		}
		
	}
	

	cout << count0;
}
