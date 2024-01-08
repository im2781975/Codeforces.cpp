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
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    vector <int> ans;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='0' && s[i]<='9')
            ans.push_back(s[i]-'0');
    }
    sort(ans.begin(), ans.end());
    cout <<ans[0];
    for(int i=1; i<ans.size(); i++)
    {
        cout<<"+" <<ans[i];
    }
}
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string s;
    cin >>s;
    vector<int>ans;
    for(int i=0; i<s.size(); i+=2)
    {
        int x=s[i] -'0';
        ans.push_back(x);
    }
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++)
    {
        cout<< ans[i];
        if(i!=ans.size()-1)
            cout<< "+";
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    int n=s.length();
    for(int i=0; i< n-1; i++)
    {
        for(int j=0; j< n-i-1; j++)
        {
            if(s[j]!='+' && s[j] < s[j+2])
                    swap(s[j], s[j+2]);
        }
    }
    cout<< s;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    // Create a substring 'g' starting from the middle of the sorted string to the end.
    string g = s.substr(s.size() / 2, s.size());

    // Iterate through the characters in the substring 'g'.
    for(int i = 0; i < g[i]; i++)
    {
        // Print the current character.
        cout << g[i];
        if(i != g.size() - 1)
            cout << '+';
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s;
    cin >>s;
    sort(s.begin(), s.end());
    int n=s.size();
    for(i=(n-1)/2; i<n-1; i++)
        cout<< s[i] <<"+";
    cout<< s[i] <<" ";
}
