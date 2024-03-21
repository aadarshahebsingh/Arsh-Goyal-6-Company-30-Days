class DataStream {
public:
    deque<int> dq;
    unordered_map<int,int> mp;
    int value,k;
    DataStream(int value, int k) {
        this->value=value;
        this->k=k;
        dq.clear();
        mp.clear();
    }
    
    bool consec(int num) {
        mp[num]++;
        dq.push_back(num);
        bool ans=(mp.size()==1 && dq.size()==k && num==value);
        if(dq.size()==k){
            int front=dq.front();
            dq.pop_front();
            mp[front]--;
            if(mp[front]==0)mp.erase(front);
        }
        return ans;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
