#include <bits/stdc++.h>
using namespace std;

int main(){
        vector<string> array = {"L68","L30","R48","L5","R60","L55","L1","L99","R14","L82"};

        long long count0 = 0;

        int currentNumber = 50;

        for (long long i = 0; i < array.size(); i++){
  char direction = array[i][0];
                long long number = stoll(array[i].substr(1));

                if (direction == 'L'){
                    count0 += number/100;
                    long long rest = number % 100;

                    if (currentNumber > 0 && (currentNumber - rest) <= 0){
                        count0 += 1;
                    }
                    currentNumber = ((currentNumber - number) % 100 + 100) % 100;
                } else{
                    count0+= number / 100;
                    long long rest = number % 100;
                    if (currentNumber > 0 && (currentNumber + rest) > 99){
                        count0 += 1;
                    }
                    currentNumber = (currentNumber+number) % 100;
                }

        }


        cout << count0;
}