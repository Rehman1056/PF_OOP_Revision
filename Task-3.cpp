/* #include<iostream>
using namespace std;
int main() {
	int arr[5] = { 15,19,11,13,10 };
	int n = 5;

	for (int i = 0; i < n - 1; i++) {
		int a = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[a]) {
				a = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[a];
		arr[a] = temp;
	}
	cout << "---- sorted arry ----" << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ,";
	}
    cout<<endl;
	return 0;
} */
