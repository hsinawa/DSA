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

void MinHeapify ( vector<int> &v, int i ){

	int n = v.size();
	int smallest = i;
	int left = 2*i + 1;
	int right = 2*i+2;

	if( left < n and v[smallest] > v[left] ){
		smallest = left;
	}

	if( right < n and v[smallest] > v[right] ){
		smallest = right;
	}

	if(smallest != i) {
		swap(v[smallest], v[i]);
		MinHeapify(v,smallest);
	}

}


void MaxHeap( vector<int> &v, int i  ) {
	int n = v.size();
	int largest = i ;
	int left = 2*i + 1;
	int right = 2*i+2;

	if( left < n and v[largest] < v[left] ) {
		largest = left;
	}

	if( right < n and v[largest] < v[right] ) {
		largest = right;
	}

	if(largest!=i){
		swap(v[largest], v[i]);
		MaxHeap(v,largest);
	}

}

int main()
{
	std::vector<int> v  = {213,134,14,34,23,14,3,25,235,13,235,2514,4,432} ;


	int n = v.size();
	

	for (int i = (n-1)/2;i>=0; i--)
	{
		MinHeapify(v,i);
	}
	

	cout<<"After Min Heap : "<<endl;

	for(auto i : v){
		cout<<i<<"  ";
	}
	cout<<endl;

	for (int i = (n-1)/2;i>=0; i--)
	{
		MaxHeap(v,i);
	}

	cout<<"After Max Heap : "<<endl;



	for(auto i : v){
		cout<<i<<"  ";
	}
	cout<<endl;
	
	return 0;
}
