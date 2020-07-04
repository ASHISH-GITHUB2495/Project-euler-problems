#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 100000


// MY OPINION IS TRIAL DEVISION METHOD IS THE BEST METHOD ...AND I ALSO WANT YOU TO HAVE BEST CLEAR IDEA ABOUT IT


int main()
{

//////////////////////////////////////start...............

	int count = 0; ll sum = 0;
	// generating my triangle number
	for (ll i = 1; i >= 1; i++)
	{
		sum = sum + i;
		count = 0;
		for (ll j = 1; j * j <= sum ; j++)       // counting devisiors
		{
			if (sum % j == 0)
				count += 2;
		}
		//count++;

		if (count > 500)
			break;



	}
	ll sq = sqrt(sum);

	if (sq * sq == sum)
		count-- ;

	cout << sum << endl;
	/////////////////////////////end.......................................
	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+" / "  to comment whole block and vice versa for undo
//ctrl+" / " for commenting a line

/*
when N <= 10, then both O(N!) and O(2N) are ok (for 2N probably N <= 20 is ok too)
when N <= 100, then O(N3) is ok (I guess that N4 is also ok, but never tried)
when N <= 1.000, then N2 is also ok
when N <= 1.000.000, then O(N) is fine (I guess that 10.000.000 is fine too, but I never tried in contest)
finally when N = 1.000.000.000 then O(N) is NOT ok, you have to find something better…*/
