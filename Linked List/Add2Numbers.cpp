#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <string>
#include <set>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <utility>
#include<vector>
using namespace std;


struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

   struct Node* addTwoLists(struct Node* l1, struct Node* l2)
    {
        // code here
        Node* x = new Node(0);
        Node* temp = x ;
        int car = 0;
        
        while(l1!= NULL || l2!=NULL || car)
        {
            int sum = 0;
            if(l1)
            {
                sum+= l1->data;
                l1=l1->next;
            }
            
              if(l2)
            {
                sum+= l2->data;
                l2=l2->next;
            }
            
            sum += car ;
            
            car = sum/10 ;
            
            Node* y = new Node(sum%10);
            
            temp->next = y;
            temp=temp->next;
            
        }
        
        return temp->next;
    }



int print(Node* x)
{

	
	int len = 0;
	while(x!=NULL)
	{
		cout<<x->data<<" -> ";
		x=x->next;
		len++;
	}

	return len ;
}

void insertHead(Node *&x, int data)
{
	if(x==NULL)
	{
		return ;
	}

	Node* y = new Node(data);

	y->next = x ;

x = y;
	//return y;

}

void insertTail(Node * x, int data)
{
	if(x==NULL)
	{
		return ;
	}

	Node* y = new Node(data);
Node *temp = x;
while(temp->next!=NULL)
{
	temp = temp->next;
}


	temp->next = y;

x = y;
}


Node* getlastPos(Node *x)
{
	

	Node *ans = x ;


	while(ans!=NULL)
	{
ans=ans->next;
	}

	return ans ;
}


Node* rev(Node *&x)
{
	if(x==NULL) return NULL;

	Node* prev = NULL , *cur = x, *frw = NULL;

	while(cur!=NULL)
	{
		frw = cur->next ;
		cur->next = prev;
		prev=cur;
		cur = frw;
	}

	return prev ;
}






Node* solve(Node* A) {
    if(A==NULL) return NULL;
    
    vector<int> arr ;
    
    Node* temp = A ;
    while(temp!=NULL) {
        arr.push_back(temp->data);
        temp=temp->next;
    }
    
    int n = arr.size();
    if(n>3)
    {
          for(int i=0;i<n-3;i++)
            {
                if( i%2!=0)
                {
                    swap(arr[i],arr[i+2]);
                }
            }
            
            
            for(auto i : arr)
            {
                cout<<i<<".  ";
            }
    }
  
    else
    {
        return A;
    }

    return NULL;
}


int main()
{
	Node *x = new Node(4);
	Node *y = new Node(2);

insertHead(x,5);
insertHead(x,52);
insertHead(x,42);
insertHead(x,85);

insertTail(x,22);
insertTail(x,92);
insertTail(x,192);

insertHead(y,9);


//Node* revlist = rev(x);





int len = print(x);
cout<<endl;
auto ans = solve(x);
cout<<endl;




	//print(x);
	return 0;
}

