Problem Source - https://www.hackerrank.com/challenges/sherlock-and-squares/problem
Discussion - https://coderinme.com/sherlock-and-squares-hackerrank-problem-solution/

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  int q, a, b, sqrta, sqrtb, squareIntegers;
  scanf ("%d", &q);
  while (q--)
    {
      scanf ("%d %d", &a, &b);

      sqrta = ceil (sqrt (a));
      sqrtb = floor (sqrt (b));
      squareIntegers = (sqrtb - sqrta) + 1;

      printf ("%d\n", squareIntegers);
    }
  return 0;
}
