
#include <bits/stdc++.h>
using namespace std;

void
reverse (string s)
{
  if (s.length () == 0)
    return;

  char first = s[0];
  reverse (s.substr (1));
  cout << first;
}

int
main ()
{
  string s;
  cin >> s;
  reverse (s);
  return 0;
}
