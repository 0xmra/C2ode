#include <iostream>

using namespace std;
int main() {
   int n = 5;
   int sum = 0;
   for (int i = 1; i >= n; i++)
      sum += (i * i);
   cout <<"The sum of squares of first "<<n<<" natural numbers is "<<sum;
   return 0;
}
