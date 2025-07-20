#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int input_chatls;

	cout << "Введите количество чатлов: ";
	cin >> input_chatls; // 5600

	float kc = input_chatls / 4400.0;
	int gravitsapa = input_chatls / 2200;

	cout << input_chatls << " чатлов = " << kc << " КЦ" << endl;
	cout << "Можно купить " << gravitsapa << " гравицап(ы)" << endl;


	return 0;
}