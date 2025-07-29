# C++ STL Complete Reference Notes

## 1. unordered_set in C++ STL

**Header:** `#include <unordered_set>`

**Description:** Hash-based container that stores unique elements in no particular order. Average O(1) insertion, deletion, and search operations.

**Key Features:**

- Elements are unique
- No ordering maintained
- Hash table implementation
- Fast average-case operations

**Syntax:**

```cpp
unordered_set<data_type> set_name;
```

**Common Operations:**

```cpp
unordered_set<int> us;

// Insertion
us.insert(10);
us.insert(20);

// Search
auto it = us.find(10);  // Returns iterator
if (it != us.end()) { /* found */ }

// Deletion
us.erase(10);           // By value
us.erase(it);           // By iterator

// Size operations
us.size();              // Number of elements
us.empty();             // Check if empty
us.clear();             // Remove all elements

// Iteration
for (auto x : us) {
    cout << x << " ";
}
```

**Time Complexity:**

- Insert/Delete/Search: O(1) average, O(n) worst case
- Space: O(n)

---

## 2. Vector in C++ STL

**Header:** `#include <vector>`

**Description:** Dynamic array that can resize itself automatically. Provides random access to elements.

**Key Features:**

- Dynamic sizing
- Random access via indexing
- Contiguous memory storage
- Efficient insertion/deletion at end

**Syntax:**

```cpp
vector<data_type> vector_name;
vector<data_type> vector_name(size);
vector<data_type> vector_name(size, initial_value);
```

**Common Operations:**

```cpp
vector<int> v;

// Insertion
v.push_back(10);        // Add at end
v.insert(v.begin(), 5); // Insert at beginning
v.insert(v.begin() + 2, 15); // Insert at position

// Access
v[0];                   // Direct access (no bounds check)
v.at(0);               // Safe access (with bounds check)
v.front();             // First element
v.back();              // Last element

// Deletion
v.pop_back();          // Remove last element
v.erase(v.begin());    // Remove first element
v.erase(v.begin() + 2); // Remove element at position

// Size operations
v.size();              // Number of elements
v.capacity();          // Allocated capacity
v.empty();             // Check if empty
v.clear();             // Remove all elements
v.resize(10);          // Resize to 10 elements

// Iteration
for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}
```

**Time Complexity:**

- Access: O(1)
- Push/Pop back: O(1) amortized
- Insert/Delete middle: O(n)
- Search: O(n)

---

## 3. Set in C++ STL

**Header:** `#include <set>`

**Description:** Associative container that stores unique elements in sorted order. Typically implemented as a balanced binary search tree.

**Key Features:**

- Elements are unique and sorted
- Automatic sorting
- Logarithmic operations
- Bidirectional iterators

**Syntax:**

```cpp
set<data_type> set_name;
set<data_type, compare_function> set_name; // Custom comparator
```

**Common Operations:**

```cpp
set<int> s;

// Insertion
s.insert(30);
s.insert(10);
s.insert(20);           // Set will be: {10, 20, 30}

// Search
auto it = s.find(20);
if (it != s.end()) { /* found */ }

// Deletion
s.erase(20);            // By value
s.erase(it);            // By iterator

// Bounds
auto lower = s.lower_bound(15); // First element >= 15
auto upper = s.upper_bound(25); // First element > 25

// Size operations
s.size();
s.empty();
s.clear();

// Iteration (always in sorted order)
for (auto x : s) {
    cout << x << " ";   // Output: sorted order
}
```

**Time Complexity:**

- Insert/Delete/Search: O(log n)
- Space: O(n)

---

## 4. unordered_multiset in C++ STL

**Header:** `#include <unordered_set>`

**Description:** Hash-based container that allows duplicate elements with no particular ordering.

**Key Features:**

- Allows duplicate elements
- No ordering maintained
- Hash table implementation
- Fast average-case operations

**Syntax:**

```cpp
unordered_multiset<data_type> multiset_name;
```

**Common Operations:**

```cpp
unordered_multiset<int> ums;

// Insertion (allows duplicates)
ums.insert(10);
ums.insert(10);
ums.insert(20);

// Count occurrences
int count = ums.count(10);  // Returns 2

// Search
auto it = ums.find(10);     // Returns iterator to one occurrence

// Deletion
ums.erase(10);              // Removes ALL occurrences
auto range = ums.equal_range(10);
ums.erase(range.first);     // Remove only one occurrence

// Iteration
for (auto x : ums) {
    cout << x << " ";
}
```

**Time Complexity:**

- Insert/Delete/Search: O(1) average, O(n) worst case
- Count: O(k) where k is number of occurrences

---

## 5. multiset in C++ STL

**Header:** `#include <set>`

**Description:** Associative container that stores elements in sorted order and allows duplicates.

**Key Features:**

- Allows duplicate elements
- Maintains sorted order
- Balanced binary search tree
- Logarithmic operations

**Syntax:**

```cpp
multiset<data_type> multiset_name;
```

**Common Operations:**

```cpp
multiset<int> ms;

// Insertion (allows duplicates)
ms.insert(20);
ms.insert(10);
ms.insert(20);
ms.insert(30);          // Set will be: {10, 20, 20, 30}

// Count occurrences
int count = ms.count(20); // Returns 2

// Search
auto it = ms.find(20);    // Returns iterator to first occurrence

// Range operations
auto range = ms.equal_range(20);
// range.first = iterator to first 20
// range.second = iterator to element after last 20

// Deletion
ms.erase(20);             // Removes ALL occurrences
ms.erase(ms.find(20));    // Remove only one occurrence
```

**Time Complexity:**

- Insert/Delete/Search: O(log n)
- Count: O(log n + k) where k is number of occurrences

---

## 6. unordered_map in C++ STL

**Header:** `#include <unordered_map>`

**Description:** Hash table that stores key-value pairs with unique keys and no particular ordering.

**Key Features:**

- Key-value pairs
- Unique keys only
- No ordering maintained
- Fast average-case operations

**Syntax:**

```cpp
unordered_map<key_type, value_type> map_name;
```

**Common Operations:**

```cpp
unordered_map<string, int> um;

// Insertion
um["apple"] = 5;
um.insert({"banana", 3});
um.emplace("orange", 7);

// Access
int value = um["apple"];    // Returns 5, creates if doesn't exist
int value = um.at("apple"); // Returns 5, throws exception if doesn't exist

// Search
auto it = um.find("apple");
if (it != um.end()) {
    cout << it->first << ": " << it->second;
}

// Deletion
um.erase("apple");          // By key
um.erase(it);              // By iterator

// Size operations
um.size();
um.empty();
um.clear();

// Iteration
for (auto& pair : um) {
    cout << pair.first << ": " << pair.second << endl;
}
```

**Time Complexity:**

- Insert/Delete/Search: O(1) average, O(n) worst case

---

## 7. map in C++ STL

**Header:** `#include <map>`

**Description:** Associative container that stores key-value pairs in sorted order of keys.

**Key Features:**

- Key-value pairs
- Keys are unique and sorted
- Balanced binary search tree
- Logarithmic operations

**Syntax:**

```cpp
map<key_type, value_type> map_name;
```

**Common Operations:**

```cpp
map<string, int> m;

// Insertion
m["charlie"] = 30;
m["alice"] = 25;
m["bob"] = 35;          // Map will be sorted by keys

// Access
int age = m["alice"];   // Returns 25
int age = m.at("alice"); // Safer access

// Search
auto it = m.find("bob");
if (it != m.end()) {
    cout << it->first << ": " << it->second;
}

// Bounds
auto lower = m.lower_bound("bob");
auto upper = m.upper_bound("charlie");

// Iteration (always in sorted order of keys)
for (auto& pair : m) {
    cout << pair.first << ": " << pair.second << endl;
}
```

**Time Complexity:**

- Insert/Delete/Search: O(log n)

---

## 8. unordered_multimap in C++ STL

**Header:** `#include <unordered_map>`

**Description:** Hash table that allows multiple values for the same key with no particular ordering.

**Key Features:**

- Key-value pairs
- Allows duplicate keys
- No ordering maintained
- Hash table implementation

**Common Operations:**

```cpp
unordered_multimap<string, int> umm;

// Insertion (allows duplicate keys)
umm.insert({"fruit", 1});
umm.insert({"fruit", 2});
umm.insert({"vegetable", 3});

// Count occurrences of a key
int count = umm.count("fruit"); // Returns 2

// Find all values for a key
auto range = umm.equal_range("fruit");
for (auto it = range.first; it != range.second; ++it) {
    cout << it->second << " ";
}
```

---

## 9. queue in C++ STL

**Header:** `#include <queue>`

**Description:** FIFO (First In, First Out) container adapter. Elements are inserted at back and removed from front.

**Key Features:**

- FIFO behavior
- No iterators (container adapter)
- Based on deque by default

**Syntax:**

```cpp
queue<data_type> queue_name;
```

**Common Operations:**

```cpp
queue<int> q;

// Insertion
q.push(10);
q.push(20);
q.push(30);

// Access
int front_element = q.front(); // Returns 10 (first inserted)
int back_element = q.back();   // Returns 30 (last inserted)

// Deletion
q.pop();                       // Removes front element (10)

// Size operations
q.size();
q.empty();

// Process all elements
while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
}
```

**Time Complexity:**

- Push/Pop: O(1)
- Front/Back access: O(1)

---

## 10. stack in C++ STL

**Header:** `#include <stack>`

**Description:** LIFO (Last In, First Out) container adapter. Elements are inserted and removed from the same end (top).

**Key Features:**

- LIFO behavior
- No iterators (container adapter)
- Based on deque by default

**Syntax:**

```cpp
stack<data_type> stack_name;
```

**Common Operations:**

```cpp
stack<int> st;

// Insertion
st.push(10);
st.push(20);
st.push(30);

// Access
int top_element = st.top(); // Returns 30 (last inserted)

// Deletion
st.pop();                   // Removes top element (30)

// Size operations
st.size();
st.empty();

// Process all elements
while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
}
```

**Time Complexity:**

- Push/Pop: O(1)
- Top access: O(1)

---

## 11. deque in C++ STL

**Header:** `#include <deque>`

**Description:** Double-ended queue that allows efficient insertion and deletion at both ends.

**Key Features:**

- Double-ended operations
- Random access
- Dynamic sizing
- Not necessarily contiguous memory

**Syntax:**

```cpp
deque<data_type> deque_name;
```

**Common Operations:**

```cpp
deque<int> dq;

// Insertion
dq.push_back(10);       // Insert at back
dq.push_front(5);       // Insert at front
dq.insert(dq.begin() + 1, 7); // Insert at position

// Access
dq[0];                  // Direct access
dq.at(1);              // Safe access
dq.front();            // First element
dq.back();             // Last element

// Deletion
dq.pop_back();         // Remove from back
dq.pop_front();        // Remove from front
dq.erase(dq.begin());  // Remove from position

// Size operations
dq.size();
dq.empty();
dq.clear();
```

**Time Complexity:**

- Push/Pop front/back: O(1)
- Random access: O(1)
- Insert/Delete middle: O(n)

---

## 12. priority_queue in C++ STL

**Header:** `#include <queue>`

**Description:** Container adapter that provides constant time access to the largest element (max-heap by default).

**Key Features:**

- Heap-based implementation
- Max-heap by default
- No iterators
- Automatic sorting

**Syntax:**

```cpp
priority_queue<data_type> pq;                    // Max heap
priority_queue<data_type, vector<data_type>, greater<data_type>> pq; // Min heap
```

**Common Operations:**

```cpp
priority_queue<int> pq; // Max heap

// Insertion
pq.push(30);
pq.push(10);
pq.push(50);
pq.push(20);

// Access
int max_element = pq.top(); // Returns 50 (largest element)

// Deletion
pq.pop();                   // Removes largest element

// Size operations
pq.size();
pq.empty();

// Min heap example
priority_queue<int, vector<int>, greater<int>> min_pq;
min_pq.push(30);
min_pq.push(10);
min_pq.push(50);
int min_element = min_pq.top(); // Returns 10 (smallest element)

// Custom comparator for objects
struct Person {
    string name;
    int age;
};

struct Compare {
    bool operator()(const Person& a, const Person& b) {
        return a.age < b.age; // Max heap based on age
    }
};

priority_queue<Person, vector<Person>, Compare> person_pq;
```

**Time Complexity:**

- Push: O(log n)
- Pop: O(log n)
- Top: O(1)

---

## 13. multimap in C++ STL

**Header:** `#include <map>`

**Description:** Associative container that stores key-value pairs in sorted order and allows duplicate keys.

**Key Features:**

- Key-value pairs
- Allows duplicate keys
- Keys are sorted
- Balanced binary search tree

**Common Operations:**

```cpp
multimap<string, int> mm;

// Insertion (allows duplicate keys)
mm.insert({"apple", 5});
mm.insert({"apple", 3});
mm.insert({"banana", 2});

// Count occurrences of a key
int count = mm.count("apple"); // Returns 2

// Find all values for a key
auto range = mm.equal_range("apple");
for (auto it = range.first; it != range.second; ++it) {
    cout << it->first << ": " << it->second << endl;
}

// Iteration (sorted by keys)
for (auto& pair : mm) {
    cout << pair.first << ": " << pair.second << endl;
}
```

**Time Complexity:**

- Insert/Delete/Search: O(log n)
- Count: O(log n + k) where k is number of occurrences

---

## 14. list in C++ STL

**Header:** `#include <list>`

**Description:** Doubly-linked list that allows efficient insertion and deletion anywhere in the container.

**Key Features:**

- Doubly-linked list
- No random access
- Efficient insertion/deletion anywhere
- Bidirectional iterators

**Syntax:**

```cpp
list<data_type> list_name;
```

**Common Operations:**

```cpp
list<int> lst;

// Insertion
lst.push_back(30);      // Insert at end
lst.push_front(10);     // Insert at beginning
lst.insert(++lst.begin(), 20); // Insert at position

// Access
lst.front();            // First element
lst.back();             // Last element
// No random access operator[]

// Deletion
lst.pop_back();         // Remove last
lst.pop_front();        // Remove first
lst.erase(lst.begin()); // Remove at position

// List-specific operations
lst.sort();             // Sort the list
lst.reverse();          // Reverse the list
lst.unique();           // Remove consecutive duplicates
lst.remove(20);         // Remove all elements with value 20

// Merge two sorted lists
list<int> lst2 = {40, 50};
lst.merge(lst2);        // Merge lst2 into lst

// Size operations
lst.size();
lst.empty();
lst.clear();
```

**Time Complexity:**

- Insert/Delete anywhere: O(1) if iterator is given
- Search: O(n)
- Sort: O(n log n)

---

## 15. next_permutation in STL

**Header:** `#include <algorithm>`

**Description:** Rearranges elements into the next lexicographically greater permutation.

**Syntax:**

```cpp
bool next_permutation(iterator first, iterator last);
bool next_permutation(iterator first, iterator last, compare_function);
```

**Usage:**

```cpp
#include <algorithm>
#include <vector>

vector<int> v = {1, 2, 3};

// Generate all permutations
do {
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
} while (next_permutation(v.begin(), v.end()));

// Output:
// 1 2 3
// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1

// For strings
string s = "abc";
do {
    cout << s << endl;
} while (next_permutation(s.begin(), s.end()));

// Important: Container should be sorted initially for all permutations
sort(v.begin(), v.end()); // Sort before generating permutations
```

**Return Value:**

- Returns `true` if next permutation exists
- Returns `false` if no next permutation exists (current is the largest)

**Time Complexity:** O(n) where n is the number of elements

---

## 16. __builtin_popcount() in STL

**Description:** GCC built-in function that counts the number of set bits (1s) in an integer.

**Syntax:**

```cpp
int __builtin_popcount(unsigned int x);
long __builtin_popcountl(unsigned long x);
long long __builtin_popcountll(unsigned long long x);
```

**Usage:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 7;  // Binary: 111
    cout << __builtin_popcount(n) << endl; // Output: 3
    
    n = 8;      // Binary: 1000
    cout << __builtin_popcount(n) << endl; // Output: 1
    
    n = 15;     // Binary: 1111
    cout << __builtin_popcount(n) << endl; // Output: 4
    
    // For different data types
    long long x = 255LL; // Binary: 11111111
    cout << __builtin_popcountll(x) << endl; // Output: 8
    
    return 0;
}
```

**Applications:**

- Counting set bits in bit manipulation problems
- Hamming weight calculation
- Binary representation analysis

**Time Complexity:** O(1) - hardware supported operation

---

## 17. sort() in C++ STL

**Header:** `#include <algorithm>`

**Description:** Sorts elements in ascending order using an efficient sorting algorithm (typically introsort - hybrid of quicksort, heapsort, and insertion sort).

**Syntax:**

```cpp
sort(iterator first, iterator last);
sort(iterator first, iterator last, compare_function);
```

**Usage:**

```cpp
#include <algorithm>
#include <vector>

// Basic sorting
vector<int> v = {64, 34, 25, 12, 22, 11, 90};
sort(v.begin(), v.end());
// v is now: {11, 12, 22, 25, 34, 64, 90}

// Descending order
sort(v.begin(), v.end(), greater<int>());
// v is now: {90, 64, 34, 25, 22, 12, 11}

// Custom comparator
struct Person {
    string name;
    int age;
};

vector<Person> people = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 35}};

// Sort by age
sort(people.begin(), people.end(), [](const Person& a, const Person& b) {
    return a.age < b.age;
});

// Sort by name length
sort(people.begin(), people.end(), [](const Person& a, const Person& b) {
    return a.name.length() < b.name.length();
});

// Sort array
int arr[] = {64, 34, 25, 12, 22, 11, 90};
int n = sizeof(arr) / sizeof(arr[0]);
sort(arr, arr + n);

// Partial sorting (sort only first k elements)
vector<int> v2 = {64, 34, 25, 12, 22, 11, 90};
partial_sort(v2.begin(), v2.begin() + 3, v2.end());
// First 3 elements are the 3 smallest in sorted order
```

**Time Complexity:** O(n log n) average and worst case

---

## 18. min_element() in C++ STL

**Header:** `#include <algorithm>`

**Description:** Returns an iterator pointing to the smallest element in a range.

**Syntax:**

```cpp
iterator min_element(iterator first, iterator last);
iterator min_element(iterator first, iterator last, compare_function);
```

**Usage:**

```cpp
#include <algorithm>
#include <vector>

vector<int> v = {64, 34, 25, 12, 22, 11, 90};

// Find minimum element
auto min_it = min_element(v.begin(), v.end());
cout << "Minimum element: " << *min_it << endl;        // Output: 11
cout << "Position: " << min_it - v.begin() << endl;    // Output: 5

// Find minimum in array
int arr[] = {64, 34, 25, 12, 22, 11, 90};
int n = sizeof(arr) / sizeof(arr[0]);
auto min_arr_it = min_element(arr, arr + n);
cout << "Minimum: " << *min_arr_it << endl;            // Output: 11

// Custom comparator (find element with minimum absolute value)
vector<int> v2 = {-5, 3, -1, 7, -9};
auto min_abs_it = min_element(v2.begin(), v2.end(), [](int a, int b) {
    return abs(a) < abs(b);
});
cout << "Element with minimum absolute value: " << *min_abs_it << endl; // Output: -1

// Find minimum in specific range
auto min_range_it = min_element(v.begin() + 2, v.begin() + 5);
cout << "Minimum in range [2, 5): " << *min_range_it << endl;

// For custom objects
struct Person {
    string name;
    int age;
};

vector<Person> people = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 35}};
auto youngest = min_element(people.begin(), people.end(), [](const Person& a, const Person& b) {
    return a.age < b.age;
});
cout << "Youngest person: " << youngest->name << " (" << youngest->age << ")" << endl;
```

**Return Value:**

- Iterator to the minimum element
- If multiple minimum elements exist, returns iterator to the first one
- If range is empty, returns `last`

**Time Complexity:** O(n) where n is the number of elements in the range

---

## 19. max_element() in C++ STL

**Header:** `#include <algorithm>`

**Description:** Returns an iterator pointing to the largest element in a range.

**Syntax:**

```cpp
iterator max_element(iterator first, iterator last);
iterator max_element(iterator first, iterator last, compare_function);
```

**Usage:**

```cpp
#include <algorithm>
#include <vector>

vector<int> v = {64, 34, 25, 12, 22, 11, 90};

// Find maximum element
auto max_it = max_element(v.begin(), v.end());
cout << "Maximum element: " << *max_it << endl;        // Output: 90
cout << "Position: " << max_it - v.begin() << endl;    // Output: 6

// Find maximum in array
int arr[] = {64, 34, 25, 12, 22, 11, 90};
int n = sizeof(arr) / sizeof(arr[0]);
auto max_arr_it = max_element(arr, arr + n);
cout << "Maximum: " << *max_arr_it << endl;            // Output: 90

// Custom comparator (find element with maximum absolute value)
vector<int> v2 = {-5, 3, -1, 7, -9};
auto max_abs_it = max_element(v2.begin(), v2.end(), [](int a, int b) {
    return abs(a) < abs(b);
});
cout << "Element with maximum absolute value: " << *max_abs_it << endl; // Output: -9

// Find both min and max efficiently
auto minmax_pair = minmax_element(v.begin(), v.end());
cout << "Min: " << *minmax_pair.first << ", Max: " << *minmax_pair.second << endl;

// For custom objects
struct Person {
    string name;
    int age;
};

vector<Person> people = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 35}};
auto oldest = max_element(people.begin(), people.end(), [](const Person& a, const Person& b) {
    return a.age < b.age;
});
cout << "Oldest person: " << oldest->name << " (" << oldest->age << ")" << endl;
```

**Return Value:**

- Iterator to the maximum element
- If multiple maximum elements exist, returns iterator to the first one
- If range is empty, returns `last`

**Time Complexity:** O(n) where n is the number of elements in the range

---

## Quick Reference Summary

| Container | Ordering | Duplicates | Average Access | Use Case |
|-----------|----------|------------|----------------|----------|
| vector | Index | Yes | O(1) | Dynamic arrays, frequent access |
| list | None | Yes | O(n) | Frequent insertion/deletion |
| deque | Index | Yes | O(1) | Double-ended operations |
| set | Sorted | No | O(log n) | Unique sorted elements |
| multiset | Sorted | Yes | O(log n) | Sorted elements with duplicates |
| unordered_set | None | No | O(1) | Fast unique element operations |
| unordered_multiset | None | Yes | O(1) | Fast operations with duplicates |
| map | Key sorted | No | O(log n) | Key-value pairs, sorted |
| multimap | Key sorted | Yes | O(log n) | Key-value pairs, sorted, duplicate keys |
| unordered_map | None | No | O(1) | Fast key-value operations |
| unordered_multimap | None | Yes | O(1) | Fast key-value, duplicate keys |
| stack | LIFO | Yes | O(1) | Last-in-first-out operations |
| queue | FIFO | Yes | O(1) | First-in-first-out operations |
| priority_queue | Priority | Yes | O(1) top | Priority-based processing |

## Key Points to Remember

1. **Choose the right container** based on your access patterns and requirements
2. **Hash-based containers** (unordered_*) offer O(1) average performance but no ordering
3. **Tree-based containers** (set, map) maintain sorting and offer O(log n) operations
4. **Sequence containers** (vector, list, deque) maintain insertion order
5. **Container adapters** (stack, queue, priority_queue) provide specialized interfaces
6. **Always consider time complexity** when choosing operations
7. **Use iterators** for safe and efficient container traversal
8. **Custom comparators** allow flexible sorting and searching criteria
