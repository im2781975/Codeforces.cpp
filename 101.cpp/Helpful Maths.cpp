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
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin >>s;
    int ones =0, twos =0, threes =0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
            ones++;
        if(s[i] == '2')
            twos++;
        if(s[i] == '3')
            threes++;
    }
    if(ones!=0)
    {
        cout <<1;
        for(int i=0; i<ones-1; i++)
            cout<< '+' << 1;
        for(int i=0; i<twos; i++)
            cout<< '+' <<2;
        for(int i=0; i<threes; i++)
            cout <<'+' <<3;
            
        return 0;
    }
    if(twos!=0)
    {
        cout <<2;
        for(int i=0; i<twos-1; i++)
            cout<<'+' <<2;
        for(int i=0; i<threes; i++)
            cout<<'+' <<3;
        return 0;
    }
    if(threes!=0)
    {
        cout <<3;
        for(int i=0; i<threes-1; i++)
                cout<<'+'<<3;
        return 0;
    }
}
