https://codeforces.com/problemset/problem/339/A
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        sort(s.begin(), s.end());
    }
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]!='+')
            cout<< s[i] <<"+";
    }
    cout<<s[s.size()-1];
}
