//https://codeforces.com/problemset/problem/112/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >>a >>b;
    int n=min(a.size(), b.size());
    for(int i = 0; i <n; i++)
    {
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
    }
    if(a > b)
        cout << 1 ;
    else if(a < b)
        cout << -1 ;
    else
        cout << 0;
}
#include<bits/stdc++.h>
using namespace std;
string MakeLower(string s)
{
    for(int i =0; i< s.size(); i++)
    {
        if(s[i] >='A' && s[i] <='Z')
        {
            s[i]+='a'-'A';
        }
    }
    return s;
}
int main()
{
    string a, b;
    cin >>a >>b;
    a = MakeLower(a);
    b = MakeLower(b);
    int n =a.size() | b.size();
    for(int i =0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            if(a[i] >b[i])
                return cout<< 1, 0;
            return cout<< -1, 0;
        }
    }
    cout<< 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < 92)
            a[i] += 32;
        if (b[i] < 92)
            b[i] += 32;
    }
    if (a < b)
        cout << -1;
    else if (a > b)
        cout << 1;
    else
        cout << 0;
        
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    int n = a.compare(b);

    if (n < 0)
        cout << -1;
    else if (n > 0)
        cout << 1;
    else
        cout << 0;

    return 0;
}
