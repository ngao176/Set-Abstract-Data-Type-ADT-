# Set-Abstract-Data-Type-ADT-

The Set Abstract Data Type (ADT) is an ADT that can store unique elements. Generally, the Set ADT is defined by the following operations:

size: Return the number of elements stored in the set

insert(x): Insert element x into this set (don't allow duplicates)

remove(x): Remove element x from this set (if it exists)

find(x): Determine whether or not x exists in this set

We can implement the Set ADT using various data structures we have already learned about, and we can even simply wrap around existing C++ classes:

We can use an Array List, which is implemented in the C++ vector class

We can use a Linked List, which is implemented in the C++ list class

We can use a Red-Black Tree (RBT), which is implemented in the C++ set class

We can use a Hash Table, which is implemented in the C++ unordered_set class

We can use a Multiway Trie (MWT), which is not natively implemented in C++

We can use a Ternary Search Tree (TST), which is not natively implemented in C++
