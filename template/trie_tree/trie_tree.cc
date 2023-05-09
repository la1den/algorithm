#include "parse.hh"

using namespace std;

class TrieTree {
    public:

    TrieTree(){};
    TrieTree(vector<string>& words) {};

    void add_word(string word){
        TrieTree* dtp = this;

        int n = word.size();
        if (n == 0) return;

        for (int i = 0; i < n; i++)
        {
            char c = word[i];
            if (dtp->table_.count(c) == 0) {
                dtp->table_[c] = new TrieTree;
            }
            dtp = dtp->table_[c];
        }
        dtp->isWord_ = true;
        
    }

    bool find_word(string word) {
        
        

    }

    /* void clear() { */
    /*     TrieTree* dtp = this; */

    /*     for (auto i = table_.begin(); i != table_.end(); i++) { */
    /*         (*i->second).clear(); */
    /*     } */

    /*     delete dtp; */
    /* } */

    private:
    bool isWord_ = false;
    unordered_map<char, TrieTree*> table_;
};

int main() {
    TrieTree *dtp = new TrieTree;
    dtp->clear();
}

