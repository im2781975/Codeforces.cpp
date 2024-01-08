//https://codeforces.com/problemset/problem/266/A
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            cnt=cnt+1;
    }
    cout<<cnt;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt=0;
    cin >>n;
    string a;
    cin >>a;
    for(int i=1; i<=n; i++)
    {
        if(a[i]==a[i-1])
            cnt++;
    }
    cout<< cnt;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt=0;
    cin >>n;
    string s;
    cin >>s;
    for(int i=0; i<n; i++)
    {
        if(i!= n-1 && s[i]==s[i+1])
            cnt++;
        else
        {
            cout << cnt;
                break;
        }
    }
}
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n, cnt=0;
    cin >>n;
    string s;
    cin >>s;
    for(int i=0; i<n-1; i++)
        cnt+=s[i]==s[i+1];
    cout<<cnt;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt=0;
    string st;
    cin>> n;
    cin>> st;
    for(int i=0; i<n; i++)
    {
        for(;i <n && st[i]==st[i+1]; i++)
            cnt++;
    }
    cout << cnt;
}
