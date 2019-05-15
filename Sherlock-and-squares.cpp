#include <bits/stdc++.h>

using namespace std;

int main ()
{
  int q, a, b, c, d, count;
  scanf ("%d", &q);
  while (q--)
    {
      scanf ("%d %d", &a, &b);

      c = ceil (sqrt (a));
      d = floor (sqrt (b));
      count = (d - c) + 1;

      printf ("%d\n", count);
    }
  return 0;
}
