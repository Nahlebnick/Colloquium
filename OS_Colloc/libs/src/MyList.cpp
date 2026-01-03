#include "MyList.h"

bool MyList::is_empty()
{
	if (head == nullptr) return true;
	return false;
}

void MyList::push_head(int data)
{
	node* tmp;
	tmp = new node;
	tmp->info = data;
	if (is_empty())
	{
		tmp->next = nullptr;
		head = tmp;
	}
	else
	{
		tmp->next = head;
		head = tmp;
	}
}

void MyList::push_tail(int data)
{
	node* tmp;
	tmp = new node;
	if (is_empty())
	{
		head = new node;
		head->next = nullptr;
		head->info = data;
	}
	else
	{
		tmp = head;
		while (tmp->next != nullptr)
		{
			tmp = tmp->next;
		}

		tmp->next = new node;
		tmp->next->info = data;
		tmp->next->next = nullptr;
	}
}

void MyList::change_element(node* tmp, int info)
{
	tmp->info = info;
}

void MyList::delete_element(int data)
{
	node* tmp, * save;
	tmp = find_by_value(data);
	save = head;
	if (!is_empty() && tmp != nullptr)
	{
		if (tmp == head)
		{
			tmp = tmp->next;
			delete head;
			head = tmp;
		}
		else
		{
			while (save->next != tmp)
			{
				save = save->next;
			}
			save->next = tmp->next;
			delete tmp;
		}
	}
}

MyList::node* MyList::find_by_value(int data)
{
	node* tmp;
	tmp = head;
	while (tmp != nullptr)
	{
		if (tmp->info == data) return tmp;
		tmp = tmp->next;
	}
	return nullptr;
}

void MyList::show_list()
{
	if (is_empty())
	{
		std::cout << "out: empty!" << std::endl;
	}
	else
	{
		node* tmp;
		tmp = head;
		std::cout << "out: [" << tmp->info;
		while (tmp->next)
		{
			tmp = tmp->next;
			std::cout << ", " << tmp->info;
		}
		std::cout << "]" << std::endl;
	}
}

int MyList::getfirst() {
	if (!is_empty())
		return head->info;
	return 0;
}

int MyList::getlast() {
	if (!is_empty()) {
		node* temp = head;
		while (temp->next) {
			temp = temp->next;
		}
		return temp->info;
	}
	return 0;
}

void MyList::reverse()
{
	head = reverseRecursive(head);
}

MyList::node* MyList::reverseRecursive(node* current)
{
	if (!current || !current->next)
	{
		return current;
	}

	node* newHead = reverseRecursive(current->next);
	current->next->next = current;

	current->next = nullptr;
	return newHead;
}
