int cookies(int k, vector<int> A)
{
	priority_queue<int, vector<int>, greater<int>> min_heap;
  
	for (int i = 0; i < A.size(); i++)
		min_heap.push(A[i]);           // Building Min Heap
	
	int count = 0;
	while (min_heap.top() < k)
	{
		if (min_heap.empty())
			return -1;
		int temp1 = min_heap.top();
		min_heap.pop();
		if (min_heap.empty())
			return -1;
		int temp2 = min_heap.top();
		min_heap.pop();

		int new_val = temp1 + 2 * temp2;
		min_heap.push(new_val);
		count++;
	}
	return count;
}
