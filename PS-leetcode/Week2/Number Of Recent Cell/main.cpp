class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {
    }

    int ping(int t)
    {
        q.push(t);
        int x = q.front();
        while(x < t-3000)
        {
            q.pop();
            x = q.front();
        }
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
