class Solution {
public:
	int reverse(int x) {
		bool minus = false;
		long long tmp = x;
		if (x < 0) { minus = true; tmp = -tmp; }

		long long result = 0;
		while (tmp > 0) {
			result = result * 10 + tmp % 10;
			tmp /= 10;
		}

		if (result > INT_MAX) return 0;

		if (minus) result = -result;
		return result;
	}
};
