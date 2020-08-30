class Solution {
public:
    bool iscyclic(vector<vector<int>> &adj,int curr,vector<int> &visited){
        if(visited[curr]==2)
            return true;
        visited[curr]=2;
        for(int i=0;i<adj[curr].size();i++) {
            if(visited[adj[curr][i]]!=1){
                if(iscyclic(adj ,adj[curr][i],visited))
                    return true;
            }
        }
        visited[curr]=1;
        return false;
    }
    
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> visited(numCourses , 0);
        for(int i=0;i<prerequisites.size();i++) 
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        for(int i=0;i< numCourses;i++){
            if(visited[i]==0) {
                if(iscyclic(adj,i,visited))     //If cource a is prerequisite for course b and course b is a prerequisite for course a then we cannot take either of courses
                    return false;
            }
        }
        return true;
    }
};
