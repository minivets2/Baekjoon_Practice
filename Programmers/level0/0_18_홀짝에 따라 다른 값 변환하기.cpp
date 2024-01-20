#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n)
{
    int sum_even_pow = 0; //Â¦¼ö Á¦°ö ÇÕ
    int sum_odd = 0; //È¦¼ö ÇÕ

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum_even_pow += pow(i, 2);
        else
            sum_odd += i;
    }

    return n % 2 == 0 ? sum_even_pow : sum_odd;
}
