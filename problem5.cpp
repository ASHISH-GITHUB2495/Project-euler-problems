 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long int
 #define pb push_back
 #define for1(k,n) for(ll i=k;i<n;i++)
 #define for2(k,n) for(ll j=k;j<n;j++)
 
int checkPallindrome(ll n)
{
	std::vector<int> v;
	while (n != 0)
	{
		int a;
		a = n % 10;
		n = n / 10;
		v.pb(a);
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] != v[v.size() - 1 - i])
		{
			return 0;
		}
	}
	return 1;

}

int main()
{
		ll n;
	cin >> n;         // when n = 3;
	ll large = 1;

	ll a = pow(10, n ) / 10;
	ll b = pow(10, n ) / 10;
      
	for1(a, (a * 10) - 1)
	{
		for2(100, (b * 10) - 1)
		{	int flag = 0;
			ll pro = i * j;
			flag = checkPallindrome(pro);
			if (flag == 1 && large < pro)
				large = pro;
		}
		
}
  cout<<large<<endl;
		return 0;
}
