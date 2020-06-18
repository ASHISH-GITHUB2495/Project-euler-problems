
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
	const string str = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
	int arr[1000];
	for (int i = 0; i < 1000; i++)
	{
		char ch = str[i];
		int j = ch - '0';
		arr[i] = j;
	}


	int n;
	cin >> n;  /// let n be 4 or 11
	vector <int> vec1;
	vector <int> vec2;

	ll largest = 0;
	for (int i = 0; i < 1000 - n; i++)
	{	ll sum = 1; vec1.clear();
		for (int j = i; j < i + n; j++)
		{	sum = sum * arr[j];
			vec1.pb(arr[j]);
		}
		if (sum > largest)
		{	vec2 = vec1;
			largest = sum;
		}

		vec1.clear();
	}
	cout << largest << endl;
	for (int i = 0; i < vec2.size(); i++)
		cout << vec2[i] << " ";


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

