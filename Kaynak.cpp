#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");

	int counter = 0, sum = 0, grade;
	double ortalama;

	cout << "Ortalama Hesaplama Programýna Hoþ Geldiniz, Programý Sonlandýrmak ve Ortalamayý Görmek Ýçin Not Kýsmýna -1 Giriniz\n";
	cout << "Not Giriniz: ";
	cin >> grade;

	while (grade != -1) {

		if (grade <= 100 && grade >= 0) {
		sum += grade;
		counter++;
		cin >> grade;
		}
		else {
			cout << "Geçerli Bir Not Giriniz!!\n";
			cin >> grade;
		}
	}

	if (counter != 0) {
		ortalama = double(sum) / counter;
		cout << "Girilen Sayý = " << counter << endl << "Not Ortalamasý = " << ortalama << endl;
	}
	else {
		cout << "Hiçbir Not Girilmedi!!\n";
	}

}