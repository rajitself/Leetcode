class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // int n = gas.size();
        // for(int i = 0; i < n; i++){
        //     if(helper(gas,cost,i)) return i;
        // }
        // return -1;
        int totalGas = 0, currGas = 0, start = 0;
        for (int i = 0; i < gas.size(); ++i) {
            totalGas += gas[i] - cost[i];
            currGas += gas[i] - cost[i];

            // If we can't reach the next station
            if (currGas < 0) {
                start = i + 1;  // try next station
                currGas = 0;
            }
        }

        return totalGas >= 0 ? start : -1;
    }
    bool helper(vector<int>& gas, vector<int>& cost,int idx){
        int n = gas.size();
        int fuel = gas[idx] - cost[idx];
        int i = (idx + 1) % n;
        while(fuel >= 0){
            if(i == idx) return true;
            fuel += gas[i] - cost[i];
            i++;
            i %= n;
        }
        return false;
    }
};