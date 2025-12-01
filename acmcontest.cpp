#include<iostream>
using namespace std;

int arr[(int)2e3 + 5][(int)2e3 + 5];
int freq[(int)2e3 + 5][(int)2e3 + 5];
int freq2[(int)2e3 + 5][(int)2e3 + 5];
int suf[(int)2e3 + 5][(int)2e3 + 5];
int suf2[(int)2e3 + 5][(int)2e3 + 5];

int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
			freq[i][arr[i][j] - 1]++;
			freq2[arr[i][j] - 1][j]++;
		}
	}
	
	//horizontal
	for (int i = 0; i < n; i++)
	{
		suf[i][n - 1] = freq[i][n - 1];

		for (int j = n - 1; j >= 0; j--)
		{
			suf[i][j] = suf[i][j + 1] + freq[i][j];
		}
	}
	//vertical
	for (int j = 0; j < n; j++)
	{
		suf2[n - 1][j] = freq2[n - 1][j];
		for (int i = n - 1; i >= 0; i--)
		{
			suf2[i][j] = suf2[i + 1][j] + freq2[i][j];
		}
	}
	int q; cin >> q;
	for (int t = 0; t < q; t++)
	{
		int x, y;
		cin >> x >> y;
		for (int j = n; j >= 0; j--)
		{
			if (suf[x - 1][j] >= x)
			{
				cout << j + 1 << ' ';
				break;
			}
		}
		for (int i = n; i >= 0; i--)
		{
			if (suf2[i][y - 1] == y)
			{
				cout << i + 1 << endl;
				break;
			}
		}
		cout << endl;
	}
	/*cout << endl;
	cout << "freq\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << freq[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
	cout << "suf\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << suf[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
	cout << "freq2\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << freq2[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
	cout << "suf2\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << suf2[i][j] << ' ';
		}
		cout << endl;
	}*/
	return 0;
}
	









