#include <iostream>
using namespace std;

class Solution {
public:

	class Sum {
	public:
		Sum(){
			++_count;
			_total += _count;
		}
		static void Reset() {
			_count = 0;
			_total = 0;
		}
		static int GetSum() {
			return _total;
		}
	private:
		static int _count;
		static int _total;
	};
	int Sum_Solution(int n) {
		Sum::Reset();
		//Sum s[n];
		Sum *ps = new Sum[n];
		delete[] ps;
		return Sum::GetSum();
	}
};

int Solution::Sum::_count = 0;
int Solution::Sum::_total = 0;