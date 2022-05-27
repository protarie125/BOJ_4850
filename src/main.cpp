#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll n, w, d, v;
	cin >> n >> w >> d >> v;
	while (cin.good()) {
		const auto& ex = (w * (n - 1) * n) / 2;
		auto diff = ex - v;
		diff /= d;

		if (0 == diff) {
			cout << n << '\n';
		}
		else {
			cout << diff << '\n';
		}

		cin >> n >> w >> d >> v;
	}

	return 0;
}