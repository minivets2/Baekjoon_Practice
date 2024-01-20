#include <string>
#include <vector>

using namespace std;

int solution(int num)
{
    int count = 0;
    long Num = num;

    if (num == 1)
        return 0;

    while (true)
    {
        if (Num % 2 == 0)
            Num /= 2;
        else
        {
            Num *= 3;
            Num++;
        }

        count++;

        if (Num == 1 || count == 500)
            break;
    }

    return Num == 1 ? count : -1;
}