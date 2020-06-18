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

//////////////////////////////////////start...............
	// finding pythagorian triplet where a2 + b2 =c2 and a+b+c=1000
	ll sum = 2;
	cout<<"enter no. upto which you have to find sum of primes\n";
	int n;
	cin >> n;
	bool arr[n];
	fill(arr, arr + n, false);



	for (int i = 3; i < n; i = i + 2)
	{
		if (arr[i] == false)
		{
			sum = sum + i;
			for (int j = i + i; j < n; j = j + i)
				arr[j] = true;
		}
	}
	cout << sum << endl;
	
	
	
	ll sum1 = 2;
double time= (double)clock()  / CLOCKS_PER_SEC;
printf("after doing seive of atkali -> %.10fs\n",time);


	for (int i = 3; i < n; i = i + 2)
	{	int flag = 0;
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				flag = 1;
				break;
			}

		}
		if (flag == 0)
			sum1 = sum1 + i;
	}
	cout << sum1 << endl;
	 printf("after doing trial division method -> %.10fs\n", ((double)clock()  / CLOCKS_PER_SEC) -time);
/////////////////////////////end................................... ....
#ifndef ONLINE_JUDGE
   printf("\nTotal time taken -> %.10fs\n", (double)clock()  / CLOCKS_PER_SEC );
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

