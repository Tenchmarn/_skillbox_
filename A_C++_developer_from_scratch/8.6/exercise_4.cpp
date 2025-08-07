#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int count_second = 1,		// счетчик секунд 
		file = 0,				// размер скачиваемого фалйа
		download_file = 0,		// скачано файла
		speed_download = 0;		// скорость соединения

	int percent = 0;			// процент


	cout << "Укажите размер файла для скачивания: ";
	cin >> file;
	while (file <=0)
	{
		cout << "Еще раз укажите размер файла больше и не равный 0: ";
		cin >> file;
	}

	cout << "Какова скорость вашего соединения: ";
	cin >> speed_download;
	while (speed_download <= 0)
	{
		cout << "Скорость вашего содеинения не может быть меньше или равна 0, введите значение еще раз: ";
		cin >> speed_download;
	}

	while (true)
	{
		download_file += speed_download;

		percent = (float(download_file) / file) * 100;

		if (download_file >= file)
		{
			cout << "Прошло " << count_second << " сек.";
			cout << " Скачано " << file << " из ";
			cout << file << " МБ " << "(" << 100 << "%).\n";
			break;
		}
		else
		{
			cout << "Прошло " << count_second << " сек.";
			cout << " Скачано " << download_file << " из ";
			cout << file << " МБ " << "(" << percent << "%).\n";
		}
		count_second++;
	}

	return 0;
}