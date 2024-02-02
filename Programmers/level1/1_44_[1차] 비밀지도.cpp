#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int N;

vector<string> setMap(vector<int> arr)
{
    vector<string> answer;

    for (int i = 0; i < N; i++)
    {
        int num = arr[i];
        string s1 = "";
        string s2 = "";

        while (true)
        {

            if (num != 1 && num != 0)
            {
                s1 += to_string(num % 2);
                num /= 2;
            }

            if (num == 1 || num == 0)
            {
                s1 += to_string(num);
                break;
            }

        }

        reverse(s1.begin(), s1.end());

        for (int i = 0; i < N - s1.size(); i++)
        {
            s2 += "0";
        }

        answer.push_back(s2 + s1);
    }

    return answer;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2)
{
    N = n;

    vector<string> answer;
    vector<string> answer1 = setMap(arr1);
    vector<string> answer2 = setMap(arr2);

    for (int i = 0; i < n; i++)
    {
        string s = "";

        for (int j = 0; j < n; j++)
        {
            if (answer1[i][j] == '1' || answer2[i][j] == '1')
                s += "#";
            else if (answer1[i][j] == '0' && answer2[i][j] == '0')
                s += " ";
        }

        answer.push_back(s);
    }

    return answer;
}