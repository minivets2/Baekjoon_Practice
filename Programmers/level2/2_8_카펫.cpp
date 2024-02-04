#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow)
{
    int width, height;
    bool flag = false;

    for (int i = brown / 2; i >= 1; i--)
    {
        flag = false;

        for (int j = i; j >= 1; j--)
        {
            if (i * j == brown + yellow && i * 2 + (j - 2) * 2 == brown)
            {
                width = i;
                height = j;
                flag = true;
                break;
            }
        }

        if (flag)
            break;
    }

    return { width, height };
}