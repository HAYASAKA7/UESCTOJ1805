#include<iostream>
using namespace std;
int main()
{
	int N, M, K;
	long long ans;
	cin >> N >> M >> K;
	if (K == -1 && (N + M) % 2 != 0) cout << "0";
	else {
		ans = 1;
		for (int i = 1; i <= N - 1; i++)
			for (int j = 1; j <= M - 1; j++)
				ans *= 2;
		cout << ans;
	}
	return 0;
}
