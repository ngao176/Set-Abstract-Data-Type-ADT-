#include "Set.h"

/**
 * Implement the RedBlackTreeSet methods correctly
 */
unsigned int RedBlackTreeSet::size() {
    /* YOUR CODE HERE */
    return rbt.size();
}

void RedBlackTreeSet::insert(string s) {
    /* YOUR CODE HERE */
    if(rbt.find(s) == rbt.end()){
        rbt.emplace(s);
    }
    //rbt.emplace(s);
}

void RedBlackTreeSet::remove(const string & s) {
    /* YOUR CODE HERE */
    if (find(s) == true) {
        rbt.erase(rbt.find(s));
    }
}

bool RedBlackTreeSet::find(const string & s) {
    /* YOUR CODE HERE */
    if (rbt.find(s) == rbt.end()) {
        return false;
    }else {
        return true;
    }
}
