#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	float health;		// здоровье
	float resistance;	// сопротивление
	float damage;		// урон

	cout << "Введите здоровье: "; cin >> health;
	cout << "Введите сопротивление: "; cin >> resistance;
	
	while (health > 0)
	{
		cout << "Введите урон: "; cin >> damage;

		float community;	// общий показатель урона
		if (damage == 1)
		{
			community = damage - resistance;
		}
		else
		{
			community = damage * resistance;
		}
		
		health -= community;

		if (health < 0)
		{
			cout << "Орк побежден!\n";
			break;
		}
		else
		{
			cout << "\nЖизнь орка: " << health;
			cout << "\nОрку был нанесен урон: " << community;
			cout << '\n';
		}
	}

	return 0;
}