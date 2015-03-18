#include <iostream>
#include <stdio.h>
#include <string>
#include <ctype.h>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    string str;
    string::iterator it;
 
    cin >> n;
    getchar();
    while(n--)
    {
        getline(cin, str);
        for(it = str.begin(); it != str.end(); ++it)
        {
            if (isalpha(*it))
            {
                *it = *it + 3;
            }
        }
 
        reverse(str.begin(), str.end());
 
        for(it = str.begin() + (str.size() / 2); it != str.end(); it++)
        {
            *it = *it -1;
        }
 
        cout << str << endl;
    }
 
    return 0;
}