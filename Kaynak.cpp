#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");

	int counter = 0, sum = 0, grade;
	double ortalama;

	cout << "Ortalama Hesaplama Program�na Ho� Geldiniz, Program� Sonland�rmak ve Ortalamay� G�rmek ��in Not K�sm�na -1 Giriniz\n";
	cout << "Not Giriniz: ";
	cin >> grade;

	while (grade != -1) {

		if (grade <= 100 && grade >= 0) {
		sum += grade;
		counter++;
		cin >> grade;
		}
		else {
			cout << "Ge�erli Bir Not Giriniz!!\n";
			cin >> grade;
		}
	}

	if (counter != 0) {
		ortalama = double(sum) / counter;
		cout << "Girilen Say� = " << counter << endl << "Not Ortalamas� = " << ortalama << endl;
	}
	else {
		cout << "Hi�bir Not Girilmedi!!\n";
	}

}