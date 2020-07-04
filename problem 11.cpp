#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 100000
int n;
int grid[20][20];
int vis[20][20] = {0};
ll highest;
int dx[8] = {3, 3, 0, -3, -3, -3, 0, 3};
int dy[8] = {0, 3, 3, 3, 0, -3, -3, -3};




int main()
{

//////////////////////////////////////start...............
	int n;
	n = 20;

	for1(0, n)
	for2(0, n)
	cin >> grid[i][j];
	highest = 0;

	for (int i = 0; i < 20 ; i++) // for right
	{
		for (int j = 0; j <= 20 - 4; j++)
		{	ll sum = 1;
			for (int k = j; k <= j + 3; k++)
				sum = sum * grid[i][k];

			if (sum > highest )
				highest = sum;

		}
	}

	for (int i = 0; i < n; i++) // for down
	{
		for (int j = 0; j <= 20 - 4; j++)
		{
			ll sum = 1;
			for (int k = j; k <= j + 3; k++)
				sum = sum * grid[k][i];


			if (sum > highest )
				highest = sum;
		}

	}



	for (int i = 0; i < n; i++) // for diagonal right
	{
		for (int j = 0; j < n; j++)
		{
			int ii = i + 3, jj = j + 3;
			if ((ii >= 0 && ii < n) && (jj >= 0 && jj < n))
			{
				ll sum = 1;

				for (int k = 0; k < 4; k++)
				{
					sum = sum * grid[i + k][j + k];

				}

				if (sum > highest )
					highest = sum;







			}
		}
	}


	for (int i = 0; i < n; i++) // for diagonal left
	{
		for (int j = 0; j < n; j++)
		{
			int ii = i  - 3, jj = j + 3;
			if ((ii >= 0 && ii < n) && (jj >= 0 && jj < n))
			{
				ll sum = 1;

				for (int k = 0; k < 4; k++)
				{
					sum = sum * grid[i - k][j + k];

				}

				if (sum > highest )
					highest = sum;







			}
		}
	}




















	cout << highest << endl;

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
