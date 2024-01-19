#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Document
{
    int importance;
    int order;
};

bool compare(Document a, Document b)
{
    if (a.importance > b.importance)
    {
        return true;
    }

    return false;
}

int main()
{
    int testCount, N, M, importance;
    cin >> testCount;

    for (int i = 0; i < testCount; i++)
    {
        cin >> N >> M;

        queue<Document> documents;
        vector<Document> nums;

        for (int i = 0; i < N; i++)
        {
            cin >> importance;

            Document document;
            document.importance = importance;
            document.order = i;

            documents.push(document);
            nums.push_back(document);
        }

        sort(nums.begin(), nums.end(), compare);

        int count = 0;
        int index = 0;
        int maxIndex = 0;

        while (true)
        {
            Document document = documents.front();

            bool value = false;
            bool value2 = true;
            for (int i = index; i < nums.size(); i++)
            {
                if (nums[i].importance > document.importance && nums[i].order != document.order)
                {
                    value = true;
                    break;
                }

                if (nums[i].importance == document.importance && value2)
                {
                    value2 = false;
                    maxIndex = i;
                }
            }

            if (value)
            {
                documents.pop();
                documents.push(document);
            }
            else
            {
                documents.pop();
                count++;
                index = maxIndex + 1;

                if (document.order == M)
                {
                    cout << count << "\n";
                    break;
                }
            }
        }
    }
}