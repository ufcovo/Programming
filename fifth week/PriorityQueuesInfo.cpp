Priprity Queues:
----------------
consists of entries, each of which contains a key called the priority of the entry.
The insert or delete functions is altered so that the highest priortiy item will always
be served before than the lower ones.

template <class T>
struct node
{
	int key; // non customer:0 , customers: 1, bussiness: 2
	T info;
	node <T> *link;
};
