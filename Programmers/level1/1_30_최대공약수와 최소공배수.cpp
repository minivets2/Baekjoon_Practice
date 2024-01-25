#include <string>
#include <vector>

using namespace std;

int GCD(int n, int m)
{
    //최대 공약수
    int min_num = min(n, m);

    for (int i = min_num; i >= 1; i--)
    {
        if (n % i == 0 && m % i == 0)
            return i;
    }
}

vector<int> solution(int n, int m)
{
    vector<int> answer;

    answer.push_back(GCD(n, m));
    answer.push_back((n * m) / answer[0]);

    return answer;
}