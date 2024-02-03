#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int s, int e)
{
    string s1 = my_string.substr(0, s);
    string s2 = my_string.substr(s, e - s + 1);
    string s3 = my_string.substr(e + 1, my_string.size() - e + 1);

    reverse(s2.begin(), s2.end());

    return s1 + s2 + s3;
}