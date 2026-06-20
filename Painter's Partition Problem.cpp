//Given an array/list of length ‘n’, where the array/list represents the boards and each element of the given array/list represents the length of each board. Some ‘k’ numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint.



//You are supposed to return the area of the minimum time to get this job done of painting all the ‘n’ boards under a constraint that any painter will only paint the continuous sections of boards.

bool isPossible(vector<int>& boards, int k, int mid)
{
    int painters = 1;
    int time = 0;

    for(int i = 0; i < boards.size(); i++)
    {
        if(time + boards[i] <= mid)
        {
            time += boards[i];
        }
        else
        {
            painters++;
            time = boards[i];

            if(painters > k)
                return false;
        }
    }

    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int st = *max_element(boards.begin(), boards.end());
    int end = accumulate(boards.begin(), boards.end(), 0);

    int ans = -1;

    while(st <= end)
    {
        int mid = st + (end - st) / 2;

        if(isPossible(boards, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    return ans;
}



