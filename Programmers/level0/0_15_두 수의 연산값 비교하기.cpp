#include <string>
#include <vector>

using namespace std;

int solution(int a, int b)
{
    string s = to_string(a) + to_string(b);

    return stoi(s) < 2 * a * b ? 2 * a * b : stoi(s);
}