#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
	while (true)
	{
		cout << "masukan jumlah data array : ";
		cin >> n;

		if (n <= 20) {
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "masukan element array" << endl;
	cout << "=====================" << endl;
 
	for (int i = 0; i < n; i++)
	{
		cout << "data ke -" << (i + 1) << ":";
		cin >> arr[1];

	}
}

void insertionsort() {
	int temp;
	int j;

	for (int i = 1; i < n; i++) {
		temp = arr[i];

		j = i - 1;

		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;

		}
		arr[j + 1] = temp;

		cout << "\nPass" << i << ";";
		for (int k = 0; k < n; k++){
			cout << arr[k] << " ";
		}
	}
}

void display() {
	cout << endl;
	cout << "\n==========================" << endl;
	cout << "element array telah tersusun" << endl;
	cout << "============================" << endl;

	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;
	}
	cout << endl;
}

int main()
{
	input();
	insertionsort; 
	display(); 
}