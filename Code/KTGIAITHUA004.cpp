//GIAITHUA004 - Tính số dư tổ hợp chập k của n khi chia cho m
#include <bits/stdc++.h>
using namespace std;

int nCrModp(int n, int k, int m)
{
	if (k > n - k) k = n - k;
	int C[k + 1];
	memset(C, 0, sizeof(C));

	C[0] = 1; // Ham tren cung cua tam giac Pascal

	// Tu tren xuong
	for (int i = 1; i <= n; i++) {
		// dien vao muc tiep theo bang gia tri hang truoc do
		for (int j = min(i, k); j > 0; j--)
			// nCj = (n-1)Cj + (n-1)C(j-1);
			C[j] = (C[j] + C[j - 1]) % m;
	}
	return C[k];
}
int main()
{
	int t;
	cin >> t;
	while (t--){
		int n, k, m;
		cin >> n >> k >> m;
		cout << nCrModp(n, k, m) << endl;
	}
	return 0;
}