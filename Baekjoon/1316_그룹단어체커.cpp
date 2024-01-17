#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool CheckGroupWord(string word)
{
	string check = "";
	check += word[0];

	for (int i = 1; i < word.size(); i++)
	{
		if (find(check.begin(), check.end(), word[i]) == check.end())
			check += word[i];
		else if (find(check.begin(), check.end(), word[i]) != check.end() &&
			word[i - 1] == word[i])
			check += word[i];
		else
			return false;
	}

	return true;
}

int main()
{
	int N;
	cin >> N;

	string word;
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> word;
		count += CheckGroupWord(word);
	}

	cout << count;
}
