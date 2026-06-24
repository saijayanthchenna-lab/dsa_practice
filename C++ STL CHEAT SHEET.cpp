C++ STL One-Page Cheat Sheet ??
1. Vector (Dynamic Array)
vector<int> v;

v.push_back(x);
v.emplace_back(x);
v.pop_back();

v.size();
v.capacity();
v.front();
v.back();

v.erase(v.begin()+i);
v.insert(v.begin()+i, x);

v.clear();
v.empty();

TC:

push_back ? O(1)
pop_back ? O(1)
insert/erase ? O(n)
2. Pair
pair<int,int> p={1,2};

p.first;
p.second;

Vector of Pair:

vector<pair<int,int>> vp;

vp.push_back({1,2});
vp.emplace_back(1,2);
3. Iterators
v.begin();
v.end();

v.rbegin();
v.rend();

Loop:

for(auto it=v.begin();it!=v.end();it++)
    cout<<*it;
4. Stack (LIFO)
stack<int> st;

st.push(x);
st.pop();

st.top();
st.empty();
st.size();
5. Queue (FIFO)
queue<int> q;

q.push(x);
q.pop();

q.front();
q.back();
6. Priority Queue (Heap)
Max Heap
priority_queue<int> pq;
Min Heap
priority_queue<
int,
vector<int>,
greater<int>
> pq;

Operations:

pq.push(x);
pq.pop();
pq.top();
7. Set (Sorted Unique)
set<int> s;

s.insert(x);
s.erase(x);
s.find(x);

s.count(x);

TC: O(log n)

8. Multiset

Duplicates Allowed

multiset<int> ms;
9. Unordered Set
unordered_set<int> us;

Average TC: O(1)

10. Map (Key-Value)
map<int,string> mp;

mp[1]="Sai";

mp.insert({2,"Jayanth"});

cout<<mp[1];

TC: O(log n)

11. Unordered Map
unordered_map<int,int> mp;

Average TC: O(1)

Most Used STL Algorithms
sort(v.begin(),v.end());

reverse(v.begin(),v.end());

binary_search(v.begin(),v.end(),x);

lower_bound(v.begin(),v.end(),x);

upper_bound(v.begin(),v.end(),x);

max_element(v.begin(),v.end());

min_element(v.begin(),v.end());

count(v.begin(),v.end(),x);

find(v.begin(),v.end(),x);

next_permutation(v.begin(),v.end());
Important Complexities
Container	Search	Insert	Delete
Vector	O(n)	O(1) end	O(n)
Set	O(log n)	O(log n)	O(log n)
Map	O(log n)	O(log n)	O(log n)
Unordered Set	O(1)	O(1)	O(1)
Unordered Map	O(1)	O(1)	O(1)
