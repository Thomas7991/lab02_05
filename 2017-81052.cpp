#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
	vector <int> vec;
	int num;

	while(cin>>num)
	{
		vec.push_back(num);
	}

	//for (auto it = vec.begin(); it<vec.end(); it++) {  //auto ==  vector<int>::iterator
		//cout << *it;
	//}

	cout << endl;

	//sort(vec.begin(), vec.end()); this makes the order in ascending order
	sort(vec.rbegin(), vec.rend()); //this makes the order in descending order

	cout << "ordered array" << endl;

	for (auto i : vec)
	{
		cout << i << " ";
	}

	cout << endl;

	return 0;
}