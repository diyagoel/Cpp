/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
