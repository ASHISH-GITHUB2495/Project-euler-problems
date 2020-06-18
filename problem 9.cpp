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





int main()
{

	ios_base:: sync_with_stdio(false);
	cin.tie(0);

//////////////////////////////////////start...............
	// finding pythagorian triplet where a2 + b2 =c2 and a+b+c=1000
	int flag = 0;
	for (int i = 1; i < 1001; i++)
	{
		for (int j = 1; j < 1001; j++)
		{
			for (int k = 1 ; k < 1001; k++)
			{
				;
				if (i + j + k == 1000 && (i * i) + (j * j) == (k * k) )
				{
					flag = 1;
					cout << i << " " << j << " " << k << endl;
					cout << i*j*k << endl;
					break;
				}

			}
			if (flag == 1)
				break;
		}
		if (flag == 1)
			break;
	}


/////////////////////////////end................................... ....
#ifndef ONLINE_JUDGE
	//printf("\nRun Time -> %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+"/"  to comment whole block and vice versa for undo
//ctrl+"/" for commenting a line

