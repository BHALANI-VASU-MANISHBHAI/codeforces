#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#define dbg(x)           \
	cerr << #x << " = "; \
	_print(x);           \
	cerr << endl;
#else
#define dbg(x) ;
#endif
 
#define int long long
#define line cerr << "-----------------\n"; 
void solve()
{
int n;
cin >> n;

int x,y;
cin >> x >> y;

int a[n];
for(int i =0; i<n; i++) cin >> a[i];

int m,n,o,p;

cin>>m>>n>>o>>p;




}
int_least32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
 
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
	//cerr time also
	auto start = chrono::high_resolution_clock::now();
	int t=1;
	cin >> t;
	while (t--)
	{
		cerr << "--------------Test Case # " << t << "-----------" << endl;
		solve();
	}
	auto stop = chrono::high_resolution_clock::now();

	auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
	cerr << "Time: "
		 << duration.count() / 1000 << " ms" << endl;

 
	return 0;
}