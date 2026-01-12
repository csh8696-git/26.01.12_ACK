#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int n, int m) {
	vector<int> answer;
	for (int i = min(n, m); i >= 1; i--)
	{
		if (n % i == 0 && m % i == 0)
		{
			answer.push_back(i);
			break;
		}
	}
	if (answer.size() == 0)
	{
		answer.push_back(1);
	}
	for (int i = max(n, m); ; i++)
	{
		if (i % n == 0 && i % m == 0)
		{
			answer.push_back(i);
			break;
		}
	}
	return answer;
}

int Euclidean(int a, int b)
{
	return b ? Euclidean(b, a % b) : a;
}

vector<int> gcdlcm(int a, int b)
{
	vector<int> answer;
	// 유클리드 호제법
	answer.push_back(Euclidean(a, b));

	answer.push_back(a * b / answer[0]);

	return answer;
}

vector<int> gcdlcm(int a, int b)
{

	int temp = a;

	if (a > b) {
		a = b;
		b = temp;
	}

	vector<int> answer;

	for (int i = a; i > 0; i--) {
		if (((a % i) == 0) && ((b % i) == 0)) {
			answer.push_back(i);
			answer.push_back((a * b) / i);
			break;
		}
	}
	return answer;
}