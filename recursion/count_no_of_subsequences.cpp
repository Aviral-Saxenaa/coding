#include <bits/stdc++.h>
using namespace std;

int subs(int i, int n, int arr[], int sum, int totsum, int &count)
{
   if (i == n)
   {
      if (totsum == sum)
      {
         return 1; // Increment count when sum matches
      }
      return 0;
   }

   totsum += arr[i];
   int l = subs(i + 1, n, arr, sum, totsum, count);
   totsum -= arr[i];

   int r = subs(i + 1, n, arr, sum, totsum, count);

   return l + r; // Return the total count for subsets
}

int main()
{
   int totsum = 0;
   int count = 0;
   vector<int> v;
   int sum = 3;
   int i = 0;
   int n = 3;
   int arr[n] = {1, 2, 3};
   count = subs(i, n, arr, sum, totsum, count);
   cout << count;

   return 0;
}
