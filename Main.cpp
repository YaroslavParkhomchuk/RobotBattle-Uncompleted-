#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <list>
#include <vector>
#include <Windows.h>
#include "Robots.h"
using namespace std;

int mainMenu()
{
	int menuSelector;

	cout << "------ Битва Роботів 1.0 ------" << "\n\n";
	cout << "+ Головне меню +" << "\n\n";
	cout << "1 - Створити робота" << "\n";
	cout << "2 - Створити команди" << "\n";
	cout << "3 - Склад команд" << "\n";
	cout << "4 - Інформація про роботів" << "\n";
	cout << "5 - Розпочати битву" << "\n";
	cout << "6 - Вихід" << "\n";
	cout << ">>>";
	cin >> menuSelector;

	return menuSelector;
}

int robotsInfoMenu()
{
	int robotInfoSelector;

	do
	{
		cout << "Оберіть клас, про який ви хочете дізнатися інформацію: " << "\n\n";
		cout << "1 - Легкий робот" << "\n";
		cout << "2 - Середній робот" << "\n";
		cout << "3 - Важкий робот" << "\n";
		cout << "4 - Робот-медик" << "\n";
		cout << "5 - Робот-підривник" << "\n";
		cout << "6 - Повернутися до головного меню" << "\n";
		cout << "7 - Вихід" << "\n";

		cin >> robotInfoSelector;

		switch (robotInfoSelector)
		{
		case 1:
			system("cls");
			cout << "\nКлас: " << LightRobot::getRobotClass << "\n";
			cout << "Здоров'я: " << &LightRobot::getHealth << "\n";
			cout << "Шкода: " << &LightRobot::getDamage << "\n";
			cout << "Сила лікування: " << &LightRobot::getHeal << "\n";
			cout << "Рівень загрози: 3" << "\n";
			cout << "Опис класу: " << "\n\n";
			break;

		case 2:
			system("cls");
			cout << "\nКлас: " << &MediumRobot::getRobotClass << "\n";
			cout << "Здоров'я: " << &MediumRobot::getHealth << "\n";
			cout << "Шкода: " << &MediumRobot::getDamage << "\n";
			cout << "Сила лікування: " << &MediumRobot::getHeal << "\n";
			cout << "Рівень загрози: 3" << "\n";
			cout << "Опис класу: " << "\n\n";
			break;

		case 3:
			system("cls");
			cout << "\nКлас: " << &LightRobot::getRobotClass << "\n";
			cout << "Здоров'я: " << &LightRobot::getHealth << "\n";
			cout << "Шкода: " << &LightRobot::getDamage << "\n";
			cout << "Сила лікування: " << &LightRobot::getHeal << "\n";
			cout << "Рівень загрози: 3" << "\n";
			cout << "Опис класу: " << "\n\n";
			break;

		case 4:
			system("cls");
			cout << "\nКлас: " << &LightRobot::getRobotClass << "\n";
			cout << "Здоров'я: " << &LightRobot::getHealth << "\n";
			cout << "Шкода: " << &LightRobot::getDamage << "\n";
			cout << "Сила лікування: " << &LightRobot::getHeal << "\n";
			cout << "Рівень загрози: 3" << "\n";
			cout << "Опис класу: " << "\n\n";
			break;

		case 5:
			system("cls");
			cout << "\nКлас: " << &LightRobot::getRobotClass << "\n";
			cout << "Здоров'я: " << &LightRobot::getHealth << "\n";
			cout << "Шкода: " << &LightRobot::getDamage << "\n";
			cout << "Сила лікування: " << &LightRobot::getHeal << "\n";
			cout << "Рівень загрози: 3" << "\n";
			cout << "Опис класу: " << "\n\n";
			break;

		case 6:
			system("cls");
			return 1;

		case 7:
			exit(EXIT_SUCCESS);

		default:
			system("cls");
			cout << "\nНевірна цифра, спробуйте ще раз." << "\n\n";
		}

	} while (robotInfoSelector != 7);

	return robotInfoSelector;
}

void displayTeamsInfo(void)
{
	system("cls");
	cout << "Нюхай бебру" << "\n\n";
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int menuSelector;
	int robotInfoSelector;

	do
	{
		menuSelector = mainMenu();

		switch (menuSelector)
		{
			case 1:
				system("cls");
				void createRobot();
				break;

			case 2:
				system("cls");
				void createTeams();
				break;

			case 3:
				system("cls");
				displayTeamsInfo();
				break;

			case 4:
				system("cls");
				robotInfoSelector = robotsInfoMenu();
				break;

			case 5:
				system("cls");
				void startBattle();
				break;

			case 6:
				exit(EXIT_SUCCESS);
			
			default:
				system("cls");
				cout << "\nНевірна цифра, спробуйте ще раз." << "\n\n";
		}

	} while (menuSelector != 6);

	return 0;
}
