// Solution 1
class Solution {
public:
    void solve(int n,int k,queue<int> &q){
        while(q.size()>1){
            int cnt=0;
            while(++cnt<k){
                q.push(q.front());
                q.pop();
            }
            q.pop();
        }
    }
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i=1;i<=n;i++)q.push(i);

        solve(n,k,q);
        return q.front();
    }
};

// Solution 2
class Solution {
public:
    int solve(int n,int k){
        if(n==1)return 0;

        return (solve(n-1,k)+k)%n;
    }
    int findTheWinner(int n, int k) {
        return solve(n,k)+1;
    }
};
