#include <iostream>
using namespace std;
int sum_of_prime(int num);
int main() {
   int num , i;
   cout << "Enter a number : ";
   cin >> num;
   for(i = 2; i <= num/2; ++i) {
      if (sum_of_prime(i)) {
         if (sum_of_prime(num - i)) {
            cout<< "\n" << num << " = " << i << " + " << num-i << endl;
         }
      }
   }
   return 0;
}

int sum_of_prime(int num) {
   int i;
   int flag = 1;
   for(i = 2; i <= num/2; ++i) {
      if(num % i == 0) {
         flag = 0;
         break;
      }
   }
   return flag;
}
