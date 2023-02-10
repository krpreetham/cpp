#include <bits/stdc++.h>

using namespace std;

bool isVowel(char ch)
{
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		return true;
	return false;
}

int lcs(char* X, char* Y, int m, int n)
{
	int L[m + 1][n + 1];
	int i, j;
	for (i = 0; i <= m; i++) 
	{
		for (j = 0; j <= n; j++)
		{
			if (i == 0 || j == 0)
				L[i][j] = 0;

			else if ((X[i - 1] == Y[j - 1]) && isVowel(X[i - 1]))
				L[i][j] = L[i - 1][j - 1] + 1;

			else
				L[i][j] = max(L[i - 1][j], L[i][j - 1]);
		}
	}
	return L[m][n];
}

int main()
{
	char X[] = "apqresdfe";
	char Y[] = "pqarsehje";

	int m = strlen(X);
	int n = strlen(Y);
	
	cout << "Length of LCS = "<< lcs(X, Y, m, n)<<endl;

	return 0;
}
