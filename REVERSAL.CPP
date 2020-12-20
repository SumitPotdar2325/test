#include<iostream.h>
#include<conio.h>
class list
{
	private:
		char info;
		list *next;
	public:
		void insertAtFront(char);
		void display();
};
list *head;

void list :: insertAtFront(char ch)
{
	list *temp;
	temp = new(list);
	temp->info = ch;
	temp->next = head;
	head = temp;
}

void list :: display()
{
	list *ptr = head;
	while(ptr != 0)
	{
		cout<<ptr->info;
		ptr = ptr->next;
	}
}

void main()
{
	list l1;
	int i,size;
	char str[20];
	clrscr();
	cout<<"Enter your string size: ";
	cin>>size;
	cout<<"Enter your string: ";
	cin>>str;
	for(i=0; i<size; i++)
	{
		l1.insertAtFront(str[i]);

	}

	cout<<"The reverse of given string is: ";
	l1.display();
	getch();

}