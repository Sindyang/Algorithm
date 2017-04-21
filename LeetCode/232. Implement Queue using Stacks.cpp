class MyQueue {
	stack<int> s1;
	stack<int> s2;
public:
	/** Initialize your data structure here. */
	MyQueue() {

	}

	/** Push element x to the back of queue. */
	void push(int x) {
		s1.push(x);
	}

	/** Removes the element from in front of queue and returns that element. */
	int pop() {
		int num;
		int front;
		while (!s1.empty()) {
			num = s1.top();
			s1.pop();
			s2.push(num);
		}
		front = s2.top();
		s2.pop();
		while (!s2.empty()) {
			num = s2.top();
			s2.pop();
			s1.push(num);

		}
		return front;
	}

	/** Get the front element. */
	int peek() {
		int num;
		int front;
		while (!s1.empty()) {
			num = s1.top();
			s1.pop();
			s2.push(num);
		}
		front = s2.top();
		while (!s2.empty()) {
			num = s2.top();
			s2.pop();
			s1.push(num);
		}
		return front;
	}

	/** Returns whether the queue is empty. */
	bool empty() {
		if (s1.empty() && s2.empty()) {
			return true;
		}
		return false;
	}

};
