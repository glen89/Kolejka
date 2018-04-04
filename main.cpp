#include <iostream>
#include<time.h>
using std::cout;
using std::endl;
#include"QueuePriority.h"
int main()
{
	QueuePriority q;
	srand(time(NULL));

	for (int i = 0; i < 20; i++)
	{
		int v = rand() % 100;
		int p = rand() % 6;

		q.add(p, v);
		cout << "Numer elementu : " << i + 1 << "\tWartosc : " << v << "\tPriorytet : " << p << endl;
	}
	QueuePriority q2;
	for (int i = 0; i < 20; i++)
	{
		int v = rand() % 100;
		int p = rand() % 6;

		q2.add(p, v);
		//cout << "Numer elementu : " << i + 1 << "\tWartosc : " << v << "\tPriorytet : " << p << endl;

	}

	cout<<endl;
	cout << endl;
	cout << endl;
	q.debug();
	cout << "\n";
	cout << " Wartosci po posortowaniu:   " << endl;
	q.sortByChoice();
	q2.sortByInsertion();
	q.debug();
	cout << "\n";
	for (int i = 0; i < 20; i++)
	{
		
		cout << "Proiorytet : " << i + 1 << "\tWartosc : " << q.getFirst() << endl;

	}

	for (int i = 0; i < 20; i++)
	{
		//cout << "Numer elementu : " << i + 1 << "\tWartosc : " << q2.getFirst()<<endl;

	}

	



	getchar();
	return 0;
}