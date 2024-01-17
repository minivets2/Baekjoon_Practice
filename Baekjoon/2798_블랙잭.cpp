#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    int nums[100001] = { 0, };

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;

        nums[num]++;
    }

    int sub[300001] = { 0, };

    for (int i = 0; i < 100001; i++)
    {
        if (!nums[i])
            continue;

        for (int j = i + 1; j < 100001; j++)
        {
            if (!nums[j])
                continue;

            for (int k = j + 1; k < 100001; k++)
            {
                if (!nums[k])
                    continue;

                if (i + j + k > M)
                    break;
                else
                {
                    sub[M - (i + j + k)] = i + j + k;
                }
            }
        }
    }



    for (int i = 0; i < 300001; i++)
    {
        if (sub[i])
        {
            cout << sub[i];
            break;
        }
    }
}