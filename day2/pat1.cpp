#include<iostream>
using namespace std;
int main()
{
	int N;
	cout << "Enter a value\n";
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";

		}
		cout << endl; 
	}
}