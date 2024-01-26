#include <iostream>

class ch_stackInn {
   private:
	enum { max_len = 100, EMPTY = -1, FULL = max_len - 1 };
	int top;
	char s[max_len];
   public:
	void reset() { top = EMPTY; }
	void push(char c)
	   { s[top++] = c; }
	char pop() { return s[top--]; }
	char top_of() const { return s[top]; }
	bool empty() const
	   { return (top == EMPTY); }
	bool full() const
	   { return (top == FULL); }
};

class ch_stackWrap {
private:

