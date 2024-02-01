#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> sizes)
{
    int max_width = -1;
    int max_height = -1;

    for (int i = 0; i < sizes.size(); i++)
    {
        int w = min(sizes[i][0], sizes[i][1]);
        int h = max(sizes[i][0], sizes[i][1]);

        max_width = max(w, max_width);
        max_height = max(h, max_height);
    }

    return max_width * max_height;
}