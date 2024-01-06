#include <bits/stdc++.h>
//#define pii pair<int,int>
using namespace std;
int main(){
string x,y;
long long a,b,c;
cin>>x>>y;
a=x.size();
for(int i=0;i<a;i++){
    x[i]=tolower(x[i]);
    y[i]=tolower(y[i]);
}
if(x>y){
    cout<<1<<endl;
}
else if(y>x){
    cout<<-1<<endl;
}
else{
    cout<<0<<endl;
}
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
#include <map>
//#include <bits>
using namespace std;
const int MAXN = 1e5;
string makelowcase(string s)
{
	for(int i = 0 ; i < s.size(); i ++)
	{
		if(s [ i ] >= 'A' && s [ i ] <= 'Z')
			s [ i ] += 'a' - 'A';
	}
	return s;
}
int main() {
	ios::sync_with_stdio(false) , cin.tie(0) , cout.tie(0);
	string s1 , s2;
	cin >> s1 >> s2;
	s1 = makelowcase(s1);
	s2 = makelowcase(s2);
	int size1 = s1.size() | s2.size();
	for(int i = 0 ; i < size1 ; i++)
	{
		if(s1[ i ] != s2 [ i ])
		{
			if(s1[ i ] > s2 [ i ])
				return cout << 1, 0;
			return cout << -1 , 0;	
		}
	}
	cout << 0;
}
void solve(){
ll c,d,count0=0,count1=0,ans=0,maxi=INT_MIN,mini = INT_MAX,sum=0;
string a;
string b;
cin>>a;
cin>>b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 92) {
            a[i] += 32;
        }
        if (b[i] < 92) {
            b[i] += 32;
        }
    }
    if (a < b) {
        cout << -1;
    } else if (a > b) {
        cout << 1;
    } else if (a == b) {
        cout << 0;
    }
    
 
 
}
 
int main(){
 
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
ll testcase = 1;
// cin>>testcase;
while(testcase--){
    solve();
}
 
 
return 0;
}
using namespace::std;
int main()
{
    string s1,s2;
    
    cin >> s1 >> s2 ;
    
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    
    int a=s1.compare(s2);
    
    if (a>0)
    {
        cout << "1";
    }
    else if (a<0)
    {
        cout << "-1";
    }
    else
        cout << "0";
}

