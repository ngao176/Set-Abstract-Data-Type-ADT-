#include "Set.h"

/**
 * Implement the ArrayListSet methods correctly
 */
unsigned int ArrayListSet::size() {
    return arr.size();
}

void ArrayListSet::insert(string s) {
    /* YOUR CODE HERE */
    int x = arr.size();
    for(int i = 0; i < x; i++){
        if(arr[i] == s){
            return;
        }
    }
    arr.emplace_back(s);
 
}

void ArrayListSet::remove(const string & s) {
    /* YOUR CODE HERE */
    int x = arr.size();
    for(int i = 0; i < x; i++){
        if(arr[i] == s){
            arr.erase(arr.begin() + i);
        }
    }
   
}

bool ArrayListSet::find(const string & s) {
    /* YOUR CODE HERE */
    int x = arr.size();
    for(int i = 0; i < x; i++){
        if(arr[i] == s){
            return true;
        }
    }
    return false;
}
