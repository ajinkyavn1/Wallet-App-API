#include <vector>
#include <bits/stdc++.h> 

using namespace std;

struct Node{
	int data;
	struct Node *next;
}*head;
void insertAtBegining()
{
	int data;
	cout<<"\n Data=";
	cin>>data;
	struct Node *temp;
	temp=(struct Node*)malloc(sizeof(temp));
	temp->data=data;
	if(head == NULL)
	{
		head=temp;
		temp->next=NULL;
	}
	else
	{
		temp->next=head;
		head=temp;
	}
}

void print()
{
	struct Node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		cout<<"\n LINK LIST IS EMPTY";
	}
	else{
	
		while(ptr!=NULL)
		{
			cout<<" "<<ptr->data;
			ptr=ptr->next;
		}
	}
}

void insertAtEnd()
{
	int data;
	cout<<"\n\nEnter THE DATA FOR INSERT AT END=";
	cin>>data;
	struct Node *temp,*ptr=head;
	temp=(struct Node*)malloc(sizeof(temp));
	temp->data=data;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	
	}
	else
	{
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
			
		}
		ptr->next=temp;
		
	}
	
}

int printlength()
{
	int i=0;
	struct Node *ptr=head;
	
	if(head==NULL)
	{
		return i;
	}
	else
	{
		while(ptr!=NULL)
		{
			i++;
			ptr=ptr->next;
		}
		return i;	
	}
}

void insertATBetween()
{
	int pos;
	
	cout<<"ENTER THE POSITION FOR  AFTER INSERT THE NODE ";
	cin>>pos;
	int i=1;
	if(head==NULL)
	{
		cout<<"\n\nLIST IS EMPTY\n\n";
	}
	else{
		struct Node *ptr=head,*temp;
		temp=(struct Node*) malloc(sizeof(temp));
		cout<<"\nEnter The Data of Node=";
		cin>>temp->data;
		while(ptr->next!=NULL)
		{
			
			if(i==pos)
			{
				temp->next=ptr->next;
				ptr->next=temp;
				break;
				
			}
			
				i++;
				ptr=ptr->next;
			}
			
		}
	
}
int main()
{	
	int ch;
	

	do{
		cout<<"\n\n\n\n1.INSERT AT BEGINNING \n2.INSERT AT END \n3.INSERT AT GIVEN POSITION\n4.PRINT LINK LIST\n5.PRINT LENGTH OF THE LINKED LIST\n 6.EXIT\nEnter The choice=";
		cin>>ch;
		
		switch(ch)
		{
			case 1: insertAtBegining(); break;
			case 2:insertAtEnd();break;
			case 3:insertATBetween();break;
			case 4: print(); break;
			case 5: cout<<printlength(); break;
			case 6: break;
			default: cout<<"\nEnter The Valid Choice";
		}
	}while(ch!=6);
    return 0;
}
