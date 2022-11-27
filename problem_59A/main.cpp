#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int mayus(0), minus(0);
    for (size_t i = 0; i < s.length(); ++i)
    {
        if (isupper(s[i]))
        {
            mayus += 1;
        }
        else
        {
            minus += 1;
        }
    }
    if (mayus > minus)
    {
        for (size_t i = 0; i < s.length(); ++i)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (size_t i = 0; i < s.length(); ++i)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}