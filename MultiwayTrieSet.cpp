#include "Set.h"

void destroyNode(MultiwayTrieSet::Node* node) {
    if (node == nullptr) {
        return;
    }

    for (auto& child : node->children) {
        destroyNode(child.second);
    }

    delete node;
}

/**
 * Implement the MultiwayTrieSet constructor
 */
MultiwayTrieSet::MultiwayTrieSet() {
    root = new Node();
    numElements = 0;
}

/**
 * Implement the MultiwayTrieSet constructor
 */
MultiwayTrieSet::~MultiwayTrieSet() {
    destroyNode(root);
}


unsigned int MultiwayTrieSet::size() {
    return numElements;
}

/**
 * Implement the MultiwayTrieSet insert method
 */
void MultiwayTrieSet::insert(string s) {
    Node* currentNode = root;

    for (char c : s) {
        if (currentNode->children.find(c) == currentNode->children.end()) {
            // Character not found, create a new child node
            currentNode->children[c] = new Node();
        }

        currentNode = currentNode->children[c];
    }

    if (!currentNode->isWord) {
        // Increment the number of elements only if the word is not already present
        currentNode->isWord = true;
        numElements++;
    }
}

/**
 * Implement the MultiwayTrieSet remove method
 */
void MultiwayTrieSet::remove(const string& s) {
    Node* currentNode = root;
    vector<Node*> nodesStack;
    bool found = true;

    for (char c : s) {
        if (currentNode->children.find(c) == currentNode->children.end()) {
            // Character not found, the word doesn't exist
            found = false;
            break;
        }

        nodesStack.push_back(currentNode);
        currentNode = currentNode->children[c];
    }

    if (found && currentNode->isWord) {
        // Mark the last node as non-word and decrement the number of elements
        currentNode->isWord = false;
        numElements--;

        // Check if any nodes can be pruned (have no children and are not words)
        for (int i = nodesStack.size() - 1; i >= 0; i--) {
            Node* node = nodesStack[i];
            char lastChar = s[i];

            if (node->isWord || !node->children.empty() || node == root) {
                break;
            }

            delete node;
            nodesStack.pop_back();
            currentNode = nodesStack.empty() ? root : nodesStack.back();
            currentNode->children.erase(lastChar);
        }
    }
}

/**
 * Implement the MultiwayTrieSet find method
 */
bool MultiwayTrieSet::find(const string& s) {
    Node* currentNode = root;

    for (char c : s) {
        if (currentNode->children.find(c) == currentNode->children.end()) {
            // Character not found, the word doesn't exist
            return false;
        }

        currentNode = currentNode->children[c];
    }

    return currentNode->isWord;
}


