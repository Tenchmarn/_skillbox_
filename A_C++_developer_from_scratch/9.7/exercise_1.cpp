#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	string time_departure{ "00:00" };
	string time_arrival{ "00:00" };

	int hours_td(0),
		minutes_td(0),
		second_td(0);

	int hours_ta(0),
		minutes_ta(0),
		second_ta(0);

	int hours_result(0),
		minutes_result(0),
		second_result(0);

	int second_day = 86400, time_second_result(0);

	while (true)
	{
		bool checkpoint = true;
		cout << "Введите время отправления (HH:MM): ";
		cin >> time_departure;

		if (time_departure.length() != 5)
		{
			!checkpoint;
		}
		else if(time_departure.length() == 5)
		{
			if ((time_departure[0] == '0') || (time_departure[0] == '1'))
			{
				if ((time_departure[1] < '0') || (time_departure[1] > '9'))
				{
					checkpoint = false;
				}
			}
			else if	(time_departure[0] == '2')
			{
				if ((time_departure[1] < '0') || (time_departure[1] > '3'))
				{
					checkpoint = false;
				}
			}

			if (time_departure[2] != ':')
			{
				checkpoint = false;
			}

			if ((time_departure[3] < '0') || (time_departure[3] > '5'))
			{
				checkpoint = false;
			}

			if ((time_departure[4] < '0') || (time_departure[4] > '9'))
			{
				checkpoint = false;
			}
		}
		
		if (checkpoint)
		{
			hours_td = 10 * (time_departure[0] - '0') + (time_departure[1] - '0');
			minutes_td = 10 * (time_departure[3] - '0') + (time_departure[4] - '0');
			second_td = hours_td * 3600 + minutes_td * 60;
			break;
		}
		else
		{
			cout << "Error! Try again! (Ошибка! Повторите попытку!)\n" << '\7';
		}
	}

	while (true)
	{
		bool checkpoint = true;
		cout << "Введите время прибытия (HH:MM): ";
		cin >> time_arrival;

		if (time_arrival.length() != 5)
		{
			!checkpoint;
		}
		else if (time_arrival.length() == 5)
		{
			if ((time_arrival[0] == '0') || (time_arrival[0] == '1'))
			{
				if ((time_arrival[1] < '0') || (time_arrival[1] > '9'))
				{
					checkpoint = false;
				}
			}
			else if (time_arrival[0] == '2')
			{
				if ((time_arrival[1] < '0') || (time_arrival[1] > '3'))
				{
					checkpoint = false;
				}
			}

			if (time_arrival[2] != ':')
			{
				checkpoint = false;
			}

			if ((time_arrival[3] < '0') || (time_arrival[3] > '5'))
			{
				checkpoint = false;
			}

			if ((time_arrival[4] < '0') || (time_arrival[4] > '9'))
			{
				checkpoint = false;
			}
		}



		if(checkpoint)
		{
			hours_ta = 10 * (time_arrival[0] - '0') + (time_arrival[1] - '0');
			minutes_ta = 10 * (time_arrival[3] - '0') + (time_arrival[4] - '0');
			second_ta = hours_ta * 3600 + minutes_ta * 60;
			break;
		}
		else
		{
			cout << "Error! Try again! (Ошибка! Повторите попытку!)\n" << '\7';
		}
	}


	if (second_td > second_ta)
	{
		time_second_result = (second_day - second_td) + second_ta;
	}
	else if (second_td < second_ta)
	{
		time_second_result = second_ta - second_td;
	}
	
	hours_result = time_second_result / 3600;
	minutes_result = (time_second_result % 3600) / 60;

	if (hours_result > 23 || minutes_result > 59 || hours_result < 0 || minutes_result < 0)
	{
		cout << "Error! Incorrect time format! (Ошибка! Неправильный формат времени!)\n" << '\7';
	}
	else
	{
		cout << "Поездка составила ";
		cout << hours_result << " ч. " << minutes_result << " мин.";
	}

	return 0;
}
