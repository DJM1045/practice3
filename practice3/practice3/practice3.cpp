#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

//int main()
//{
//	string str1, str2;
//	while (cin >> str1 >> str2)
//	{
//		if (str1.size() < str2.size())
//			swap(str1, str2);
//		int num = str1.size() - str2.size();
//		int carry = 0;
//		for (int i = str2.size() - 1; i >= 0; --i)
//		{
//			int ret = (str1[num + i] - '0') + (str2[i] - '0') + carry;
//			str1[num + i] = ret % 10 + '0';
//			carry = ret / 10;
//		}
//		for (int i = num - 1; i >= 0; --i)
//		{
//			int ret = (str1[i] - '0') + carry;
//			str1[i] = ret % 10 + '0';
//			carry = ret / 10;
//		}
//		if (carry)
//			str1.insert(str1.begin(), '1');
//		cout << str1 << endl;
//	}
//	return 0;
//}





void printYH(int n)
{

	vector<vector<int>>a(n, vector<int>(2 * n - 1, 0));
	a[0][n - 1] = a[n - 1][0] = a[n - 1][2 * n - 2] = 1;
	if (n < 2)
	{
		cout << "-1" << endl;
		return;
	}
	for (int i = 1; i < n; ++i)
		for (int j = 1; j < 2 * n - 2; ++j)
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1] + a[i - 1][j + 1];
	for (int i = 0; i < 2 * n - 1; ++i)
		if (a[n - 1][i] != 0 && (a[n - 1][i] % 2 == 0))
		{
			cout << i + 1 << endl;
			return;
		}
	return;
}
int main()
{
	int n;
	while (cin >> n)
	{
		printYH(n);
	}
	return 0;
}