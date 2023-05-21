#include "Set.h"
#include <iostream>
using namespace std;
/**
 * Implement the HashTableSet methods correctly
 */
unsigned int HashTableSet::size() {
    /* YOUR CODE HERE */
    return ht.size();
}

void HashTableSet::insert(string s) {
    /* YOUR CODE HERE */
    if (ht.find(s) != ht.end()) {
     
        return;
    }

   
    ht.emplace(s);

}

void HashTableSet::remove(const string & s) {
    /* YOUR CODE HERE */
    ht.erase(s);
}

bool HashTableSet::find(const string & s) {
    /* YOUR CODE HERE */
    if (ht.find(s) != ht.end()) {
       
        return true;
    }
    return false;
}
