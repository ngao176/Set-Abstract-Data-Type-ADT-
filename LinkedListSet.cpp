#include "Set.h"

/**
 * Implement the LinkedListSet methods correctly
 */
unsigned int LinkedListSet::size() {
    /* YOUR CODE HERE */
    return linked.size();
}

void LinkedListSet::insert(string s) {
    /* YOUR CODE HERE */
    for(auto x : linked){
        if(x == s){
            return;
        }
    }

    linked.emplace_back(s);
}

void LinkedListSet::remove(const string & s) {
    /* YOUR CODE HERE */
    linked.remove(s);
}

bool LinkedListSet::find(const string & s) {
    /* YOUR CODE HERE */

    for(auto x : linked){
        if(x == s){
            return true;
        }
    }
        return false;

//    auto x= std::find(linked.begin(), linked.end(), s);  
//    if(x != linked.end()){
//        return true;
//    }
//    return false;
}
