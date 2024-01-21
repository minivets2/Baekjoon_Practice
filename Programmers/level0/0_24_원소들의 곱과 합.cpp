#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
    int answer1 = 1;
    int answer2 = 0;

    for (int i = 0; i < num_list.size(); i++)
    {
        answer1 *= num_list[i];
        answer2 += num_list[i];
    }

    answer2 *= answer2;

    return answer1 < answer2 ? 1 : 0;
}