class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        //sort events
        sort(events.begin(),events.end());
        //min heap
        priority_queue<int, vector<int>, greater<int>> pq;

        int day = 0;
        int n = events.size();
        int i = 0;
        int res = 0;
        while(i < n || pq.size() > 0){
            //day defining
            if(pq.size() == 0){
                day = events[i][0];
            }
            //add days in min heap
            while(i < n && events[i][0] <= day){
                pq.push(events[i][1]);
                i++;
            }
            //remove days from heap
            while(pq.size() > 0 && pq.top() < day){
                pq.pop();
            }
            //attend event
            if(pq.size() > 0){
                pq.pop();
                day++;
                res++;
            }
        }
        return res;
    }
};