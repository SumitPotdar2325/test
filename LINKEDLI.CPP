#include<iostream.h>
#include<conio.h>
class list
{
	private:
		int data;
		list *node;
	public:
		void insertAtStart(int);
		void display();
		void insertAtEnd(int);
		void insertAtMiddle(int, int);
		void deleteFromStart();
		void deleteFromEnd();

};
list *head;


void list :: deleteFromStart()
{
	head = head->node;
}

void list :: deleteFromEnd()
{
	list *temp = head;
	while(temp->node->node != 0)
	{
		temp = temp->node;
	}
	temp->node = 0;

}
void list :: insertAtEnd(int num)
{
	list *loop = head;
	while(loop->node != 0)
	{
		loop = loop->node;
	}
	list *temp = new (list);
	loop->node = temp;
	temp->data = num;

}
void list :: insertAtStart(int d)
{
			list *temp;
			temp = new (list);
			temp->data = d;
			temp->node = head;
			head = temp;
}


void list :: insertAtMiddle(int number, int position)
{
	int i;
	list *loop = head;
	for(i=1; i <= position; i++)
	{
		if(loop->node != 0)
		{
			loop = loop->node;
		}
	}
	list *temp = new (list);
	temp->data = number;
	temp->node = loop->node;
	loop->node = temp;


}

void list :: display()
{
	list *prehead = head;
	cout<<"The list is as follows:: "<<endl;
	while(prehead != 0)
	{
		cout<<prehead->data<<endl;
		cout<<prehead<<endl;
		prehead = prehead->node;
	}
}

void main()
{
	list l1;
	int choice, num, num2, num3, position;
	clrscr();
	do
	{

		cout<<"Create the linked list by choosing following number.";
		cout<<endl<<"1:Enter a number to insert number at start."<<endl<<"2:Display the list."<<endl<<"3: To insert at end."<<endl;
		cout<<"4: Enter element to add at middle or desired position";
		cout<<"\n"<<"5: Delete from start"<<endl<<"6: Delete from end"<<endl<<"Press 0 to Exit."<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter number in list: ";
				cin>>num;
				l1.insertAtStart(num);
				break;

			case 2:
				l1.display();
				break;

			case 3:
				cout<<"Enter a number to add at end of linked list.";
				cin>>num2;
				l1.insertAtEnd(num2);
				break;

			case 4:
				cout<<"Enter desired position in between first and last."<<endl;
				cin>>position;
				cout<<endl<<"Enter a number you want to add. ";
				cin>>num3;
				l1.insertAtMiddle(num3, position);
				break;

			case 5:
				l1.deleteFromStart();
				break;

			case 6:
				l1.deleteFromEnd();
				break;


		}

	}
	while(choice != 0);

}


