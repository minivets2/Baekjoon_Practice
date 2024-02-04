#include <vector>
#include <map>
#include <cmath>

using namespace std;

int solution(vector<int> nums)
{
    map<int, int> pokemon;

    for (int i = 0; i < nums.size(); i++)
    {
        if (pokemon.find(nums[i]) != pokemon.end())
            pokemon[nums[i]]++;
        else
            pokemon.insert(make_pair(nums[i], 1));
    }

    int answer = nums.size() / 2;

    if (answer > pokemon.size())
        answer = pokemon.size();

    return answer;
}