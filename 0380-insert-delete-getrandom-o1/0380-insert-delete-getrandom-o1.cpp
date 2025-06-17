class RandomizedSet {
public:
    vector<int> values;
    unordered_map<int, int> valToIndex;

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
    if (valToIndex.count(val)) return false;  // already exist

    values.push_back(val);                    // add to end of  thevector
    valToIndex[val] = values.size() - 1;      // map val to its index
    return true;
    }

    
    bool remove(int val) {
    if (!valToIndex.count(val)) return false;  // not present

    int index = valToIndex[val];               // index to  be removed
    int lastVal = values.back();               // last element in vector

    values[index] = lastVal;                   // move lastVal to index
    valToIndex[lastVal] = index;               // update index of lastVal

    values.pop_back();                         // remove last element
    valToIndex.erase(val);                     // erase removed value
    return true;
    }

    
    int getRandom() {
        int randomIndex = rand() % values.size();
        return values[randomIndex];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */