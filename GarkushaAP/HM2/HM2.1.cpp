#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int N;
	cout << "Vvedite chislo, nachinaya ot 2\n";
	cin >> N;
	vector<int> massiv(N);
	massiv[0]=1, massiv[1]=1;
	for (int i = 2; i < N; i=1+i)
		massiv[i] = massiv[i - 1] + massiv[i - 2];
	int i = 0;
	while (i < N)
	{
		cout << massiv[i] << " ";
		i++;
	}
	return 0;
}