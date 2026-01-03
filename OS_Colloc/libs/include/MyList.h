#include <iostream>

class MyList
{
protected:
	struct node
	{
		int info;
		node* next;
	};
	node* head;
public:
	MyList() : head(NULL) {};
	bool is_empty();
	void push_head(int);
	void push_tail(int);
	void change_element(node*, int);
	void delete_element(int);
	node* find_by_value(int);
	void show_list();
	int getfirst();
	int getlast();
	void reverse();
private:
	node* reverseRecursive(node* current);
};