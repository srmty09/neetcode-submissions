class MyHashSet {
public:
    vector<int> vec;

    MyHashSet() {

    }

    void add(int key) {
        if (contains(key))
            return;
        else
            vec.push_back(key);
    }

    void remove(int key) {
        vector<int> temp;

        for (auto &num : vec) {
            if (num != key)
                temp.push_back(num);
        }

        vec = temp;
    }

    bool contains(int key) {
        for (auto &num : vec) {
            if (num == key)
                return true;
        }

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */