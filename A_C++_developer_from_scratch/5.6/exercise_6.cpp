#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	char ch;

	int d_current, m_current, y_current;
	int d_birth, m_birth, y_birth;

	cout << "Введите сегодняшнюю дату (дд.мм.гггг): ";
	cin >> d_current >> ch >> m_current >> ch >> y_current;


	cout << "Введите дату рождения (дд.мм.гггг): ";
	cin >> d_birth >> ch >> m_birth >> ch >> y_birth;

	int age = y_current - y_birth;

	if (m_current < m_birth ||
		(m_current == m_birth && d_current <= d_birth))
	{
		age--;
	}


	if (age > 18 
		|| (age == 18 && (m_current > m_birth 
		|| (m_current == m_birth && d_current > d_birth))))
	{
		cout << "Можно";
	}
	else
	{
		cout << "Нельзя";
	}


	return 0;
}
