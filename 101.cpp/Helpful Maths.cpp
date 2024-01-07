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
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    int n= (s.size() +1)/2;
    int arr[n], x=0, y=0, min=0;
    while( s.size() >x)
    {
        arr[y++] = s[x];
        x =x+2;
    }
    for(int i =0; i< n; i++)
    {
        min =i;
        for(int j =i+1; j< n; j++)
        {
            if(arr[j] < arr[min])
                min =j;
        }
        swap(arr[min], arr[i]);
    }
    x =0, y =0;
    while(x < s.size())
    {
        s[x] =arr[y++];
        x+=2;
    }
    cout << s;
}
