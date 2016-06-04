
#include <stdio.h>
#include <list>

void main()
{
	std::list<int> lst_a, lst_b;
	std::list<int>::iterator itr = lst_a.begin();

	itr++;
	(*itr);

	lst_b.push_back((*itr));
	lst_a.pop_back();

	getchar();


}