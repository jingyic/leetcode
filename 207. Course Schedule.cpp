class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        if(numCourses == 0)
            return true;
        else if(prerequisites.size() == 0)
            return true;
        int* color = new int[numCourses];
        vector<vector<int>> IntList(numCourses);
        for(int i = 0;i<numCourses;i++)
            color[i] = 0;
        int n = prerequisites.size();
        for(int i = 0;i<n;i++)
        {
            IntList[prerequisites[i].first].push_back(prerequisites[i].second);
        }
        for(int i = 0;i<numCourses;i++)
        {
            if(color[i] == 0)
            {
                bool x = topoorder(i,color,IntList);
                if(x == false)
                    return false;
            }
                
        }
        
        return true;
    }
    bool topoorder(int v,int color[],vector<vector<int>> &IntList)
    {
        color[v] = 1;
        for(int i = 0;i<IntList[v].size();i++)
        {
            int w = IntList[v][i];
            if(color[w] == 1)
                return false;
            else if(color[w] == 0)
            {
                bool x = topoorder(w,color,IntList);
                if(x == false)
                    return false;
            }
        }
        color[v] = -1;
        return true;
    }
};