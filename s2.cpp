#include<bits/stdc++.h>
#define ll long long int
#define SPEED ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

bool palindrom(string s)
{
    ll count=0;
    ll n=s.size();
    for(int i=0;i<n/2;i++)
    {
        if (s[i]==s[n-i-1])
        {
            count++;
        }
    }
    cout << count << "\n";
    if (count==n/2)
        return true;
    else
        return false;
}
void solve()
{
   string s;
   cin >> s;
   if(palindrom(s))
   {
    cout << "15\n";
   } 
   else{
    cout << "fkmds\n";
   }
}

int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  

    ll t;
    cin >>t;
    while(t--)
    {
        solve();
    }
    
}