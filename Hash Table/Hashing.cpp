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


//Given the root of a *complete binary tree*, return the number of the nodes in the tree.

//Assume -  
Struct Node{
	int data;
	Node*left;
	Node* right;
}

int CountNodes(Node *root){

	if(root==NULL) {
		return 0;
	}

	//last level ---

	return 1 + CountNodes(root->left) + CountNodes(root->right);

}
// Will get all nodes of a tree ( TC: O(n)) SC : ( O(logn) )

int CountNodesIterative(Node *root){
	queue<NOde*> q;

if(root==NULL) {
	return 0;
	
}

q.push(root)
int ans  = 0;
	while(!q.empty){
		auto temp q.front();
		ans++;
		q.pop();

		if(temp->left){
			q.push(temp->left);
		}

		if(temp->right){
			q.push(temp->right);
		}

	}

	return ans ;
}

TC - O(n)
SC - O(2^logn) = O(n)


int main()
{
	
	
	return 0;
}
