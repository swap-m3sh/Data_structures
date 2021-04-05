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
    if (count==n/2)
        return true;
    else
        return false;
}
void solve()
{	
	int flag=1;
	string s;
	cin >> s;
	ll a=0;
	ll n=s.size();
	for(int i=0;i<n;i++)
	{
		if (s[i]=='a')
			a++;
	}
	if (a==n)
		cout << "NO\n";
	else
	{
		cout << "YES\n";
		string k="a";
		string ans= s+k;
		string val=ans;
		ll j=n-1;
		while(palindrom(ans))
		{
			j--;
			swap(ans[j],ans[n]);

		}
		cout << ans<<"\n";

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