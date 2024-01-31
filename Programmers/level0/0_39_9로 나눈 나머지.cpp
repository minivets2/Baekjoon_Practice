#include <string>
#include <vector>

using namespace std;

int solution(string number)
{
    int sum = 0;

    for (auto i : number)
    {
        sum += i - '0';
    }

    return sum % 9;
}