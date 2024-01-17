#include <iostream>
#include <string>

using namespace std;

int GetDisassemble(int M)
{
	string string_M = to_string(M);
	int sum = 0;

	for (auto i : string_M)
	{
		sum += i - '0';
	}

	return sum + M;
}

int main()
{
	int answer = 0;
	int N;
	cin >> N;

	for (int i = 1; i < N; i++)
	{
		int M = GetDisassemble(i);

		if (M == N)
		{
			answer = i;
			break;
		}
	}

	cout << answer;
}