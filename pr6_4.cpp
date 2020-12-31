#include <iostream>

using namespace std;

int array_result_max(int A[], int max) {
	int key = 0;
	for (int i = 0; i < 10; i++)
	{
		if (abs(A[i]) > abs(max))
		{
			max = A[i];
			key = i;
		}
	}
	return key;
}
int array_result_summ(int A[], int summ) {
	int keys = 0;
	for (int i = 0; i < 10; i++)
	{
		if (keys == 0) {
			if (A[i] > 0)
			{
				summ += A[i];
				keys = 1;
			}
		}
		else {
			summ += A[i];
		}
	}
	return summ;
}
int output(int A[]) {
	cout << "Array: ";
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i << "] " << A[i] << "   ";
	}
	return 1;
}
int output_remake(int A[], int a, int b, int k) {
	cout << "Remade Array: ";
	int B[10];
	for (int i = 0; i < 10; i++)
	{
		if (a < b) {
			if (A[i] <= b && A[i] >= a) {
				B[k] = A[i];
				k++;
			}
		}
		else if (a > b) {
			if (A[i] <= a && A[i] >= b) {
				B[k] = A[i];
				k++;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (a < b) {
			if (A[i] < a || A[i] > b) {
				B[k] = A[i];
				k++;
			}
		}
		else if (a > b) {
			if (A[i] < b || A[i] > a) {
				B[k] = A[i];
				k++;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i << "] " << B[i] << "   ";
	}
	return 1;
}
int main() {
	int A[10];
	for (int i = 0; i < 10; i++) { 
		cin >> A[i];
	}
	int a = 0;
	int b = 0;
	int k = 0;
	cin >> a;
	cin >> b;
	int max = A[0];
	int summ = 0;
	cout << "Result(max_key): " << array_result_max(A, summ) << endl;
	cout << "Result(summ): " << array_result_summ(A, max) << endl;
	cout << output(A) << endl;
	cout << output_remake(A, a, b, k) << endl;
	return 0;
}
