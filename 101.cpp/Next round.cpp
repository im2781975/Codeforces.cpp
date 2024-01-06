//  https://codeforces.com/contest/158/problem/A
#include <iostream>
#include <vector>
using namespace std;
 
void First()
{
    int n, k;
    cin >> n >> k;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if ((v[i] >= v[k-1]) && (k != 0 && v[i] != 0) ) {
            count += 1;
        } 
    }
    cout << count << endl;
}
void Second()
{
    int cnt = 0;
    int n, k;
    cin >> n >> k;
    
    int arr[n + 2];
    
    while (cin >> n >> k)
    {
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        int src = arr[k - 1];
        
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= src && arr[i] != 0)
                cnt++;
        }
        cout << cnt;
    }
}
int main()
{
    First();
    Second();
}
