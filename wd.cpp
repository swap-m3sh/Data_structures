#include<bits/stdc++.h>
#define ll long long int
#define SPEED ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

int main()
{
	SPEED;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	

	ll a,b,c;
	cin >> a >> b >> c;
	if (a==b || b==c || c==a)
		cout << "YES\n";
	else
		cout << "NO\n";
	
}
