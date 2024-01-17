#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Pos
{
	int X;
	int Y;
};

bool ComparePos(Pos a, Pos b)
{
	if (a.Y != b.Y)
		return a.Y < b.Y;

	if (a.Y == b.Y)
		return a.X < b.X;
}

int main()
{
	int N;
	cin >> N;

	vector<Pos> poses;

	Pos pos;
	int x, y;
	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		pos.X = x;
		pos.Y = y;
		poses.push_back(pos);
	}

	sort(poses.begin(), poses.end(), comparePos);

	for (int i = 0; i < N; i++)
	{
		cout << poses[i].X << " " << poses[i].Y << "\n";
	}
}