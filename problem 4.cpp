#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 1000000007
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 100000
#define matrix  vector <vector <ll>>


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

	ios_base:: sync_with_stdio(false);
	cin.tie(0);

//////////////////////////////////////start...............
    cout<<"Enter value of n which is less than or equal to 3-4"<<endl;
	ll n;
	cin >> n;         // when n = 3;
	ll large = 1;

	ll a = pow(10, n ) / 10;
	ll b = pow(10, n ) / 10;

	cout << a << " " << b << endl;
	for1(a, (a*10)-1)
	{
		for2(100, (b*10)-1)
		{	int flag = 0;
			ll pro = i * j;
			flag = checkPallindrome(pro);
			if (flag == 1 && large < pro)
				large = pro;
		}
	}

	cout << large << endl;


/////////////////////////////end................................... ....

 cout << "\nDone in " << (double) clock() / CLOCKS_PER_SEC << "sec" << endl;
return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+"/"  to comment whole block and vice versa for undo
//ctrl+"/" for commenting a line

