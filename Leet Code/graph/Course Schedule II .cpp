#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for (auto& prerequisite : prerequisites) {
            adj[prerequisite[1]].push_back(prerequisite[0]);
        }

        vector<int> indegree(numCourses, 0);
        for (int i = 0; i < numCourses; i++) {
            for (auto& neighbor : adj[i]) {
                indegree[neighbor]++;
            }
        }

        queue<int> q;
        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> topo;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            topo.push_back(node);

            for (auto& neighbor : adj[node]) {
                indegree[neighbor]--;
                if (indegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }

        if (topo.size() == numCourses) {
            return topo;
        } else {
            return {}; 
        }
    }
};
