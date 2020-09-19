class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0) return false;

		long long copy_x = x;
		long long reverse_x = 0;
		while (copy_x > 0) {
			reverse_x = reverse_x * 10 + copy_x % 10;
			copy_x /= 10;
		}

		return reverse_x == x;
	}
};
