#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct stu_node
{
	char name;
	int id;
	struct stu_node *next;

}*start;

class single_llist
{	

        public:

            stu_node* getnode(int);
		void insert_begin();
		void search();
		void display();

            single_llist() 
		{start = NULL;}
};

int main()
{

        int c, nodes, element, position, i;
	single_llist sl;
	start = NULL;

        while (1)
{
	   cout<<"1.Insert Node at beginning"<<endl;
	   cout<<"8.Display Linked List"<<endl;
	   cout<<"10.Exit "<<endl;
           cout<<"Enter your choice : ";
           cin>>c;

            switch(c)

            {

            case 1:

                cout<<"Inserting Node at Beginning: "<<endl;

                sl.insert_begin();

                cout<<endl;

                break;

            
            
            
            case 8:

                cout<<"Display elements of link list"<<endl;

                sl.display();

                cout<<endl;

                break;

           
            case 10:

                cout<<"Exiting..."<<endl;

                exit(1);

                break;  

            default:

                cout<<"Wrong choice"<<endl;

            }

        }
	return 0;

    }

     

   

    stu_node *single_llist::getnode(int value)

    {

        struct stu_node *temp, *s;

        temp = new(struct stu_node); 

        if (temp == NULL)

        {

            cout<<"Memory not allocated "<<endl;

            return 0;

        }

        else

        {

            temp->name = value;

            temp->next = NULL;     

            return temp;

        }

    }

     

    /*

     * Inserting element in beginning

     */

    void single_llist::insert_begin()

    {

        int value;

        cout<<"Enter the value to be inserted: ";

        cin>>value;

        struct stu_node *temp, *p;

        temp = getnode(value);

        if (start == NULL)

        {

            start = temp;

            start->next = NULL;          

        } 

        else

        {

            p = start;

            start = temp;

            start->next = p;

        }

        cout<<"Element Inserted at beginning"<<endl;

    }

void single_llist::search()

    {

        int value, pos = 0;

        bool flag = false;

        if (start == NULL)

        {

            cout<<"List is empty"<<endl;

            return;

        }

        cout<<"Enter the value to be searched: ";

        cin>>value;

        struct stu_node *s;

        s = start;

        while (s != NULL)

        {

            pos++;

            if (s->name == value)

            {

                flag = true;

                cout<<"Element "<<value<<" is found at position "<<pos<<endl;

            }

            s = s->next;

        }

        if (!flag)

            cout<<"Element "<<value<<" not found in the list"<<endl;  

    }

     


     

    /*

     * Display Elements of a link list

     */

    void single_llist::display()

    {

        struct stu_node *temp;

        if (start == NULL)

        {

            cout<<"The List is Empty"<<endl;

            return;

        }

        temp = start;

        cout<<"Elements of list are: "<<endl;

        while (temp != NULL)

        {

            cout<<temp->name<<endl;

            temp = temp->next;

        }

        cout<<"NULL"<<endl;

    }
