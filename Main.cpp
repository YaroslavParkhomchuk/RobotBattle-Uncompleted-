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

	cout << "------ ����� ������ 1.0 ------" << "\n\n";
	cout << "+ ������� ���� +" << "\n\n";
	cout << "1 - �������� ������" << "\n";
	cout << "2 - �������� �������" << "\n";
	cout << "3 - ����� ������" << "\n";
	cout << "4 - ���������� ��� ������" << "\n";
	cout << "5 - ��������� �����" << "\n";
	cout << "6 - �����" << "\n";
	cout << ">>>";
	cin >> menuSelector;

	return menuSelector;
}

int robotsInfoMenu()
{
	int robotInfoSelector;

	do
	{
		cout << "������ ����, ��� ���� �� ������ �������� ����������: " << "\n\n";
		cout << "1 - ������ �����" << "\n";
		cout << "2 - ������� �����" << "\n";
		cout << "3 - ������ �����" << "\n";
		cout << "4 - �����-�����" << "\n";
		cout << "5 - �����-��������" << "\n";
		cout << "6 - ����������� �� ��������� ����" << "\n";
		cout << "7 - �����" << "\n";

		cin >> robotInfoSelector;

		switch (robotInfoSelector)
		{
		case 1:
			system("cls");
			cout << "\n����: " << LightRobot::getRobotClass << "\n";
			cout << "������'�: " << &LightRobot::getHealth << "\n";
			cout << "�����: " << &LightRobot::getDamage << "\n";
			cout << "���� ��������: " << &LightRobot::getHeal << "\n";
			cout << "г���� �������: 3" << "\n";
			cout << "���� �����: " << "\n\n";
			break;

		case 2:
			system("cls");
			cout << "\n����: " << &MediumRobot::getRobotClass << "\n";
			cout << "������'�: " << &MediumRobot::getHealth << "\n";
			cout << "�����: " << &MediumRobot::getDamage << "\n";
			cout << "���� ��������: " << &MediumRobot::getHeal << "\n";
			cout << "г���� �������: 3" << "\n";
			cout << "���� �����: " << "\n\n";
			break;

		case 3:
			system("cls");
			cout << "\n����: " << &LightRobot::getRobotClass << "\n";
			cout << "������'�: " << &LightRobot::getHealth << "\n";
			cout << "�����: " << &LightRobot::getDamage << "\n";
			cout << "���� ��������: " << &LightRobot::getHeal << "\n";
			cout << "г���� �������: 3" << "\n";
			cout << "���� �����: " << "\n\n";
			break;

		case 4:
			system("cls");
			cout << "\n����: " << &LightRobot::getRobotClass << "\n";
			cout << "������'�: " << &LightRobot::getHealth << "\n";
			cout << "�����: " << &LightRobot::getDamage << "\n";
			cout << "���� ��������: " << &LightRobot::getHeal << "\n";
			cout << "г���� �������: 3" << "\n";
			cout << "���� �����: " << "\n\n";
			break;

		case 5:
			system("cls");
			cout << "\n����: " << &LightRobot::getRobotClass << "\n";
			cout << "������'�: " << &LightRobot::getHealth << "\n";
			cout << "�����: " << &LightRobot::getDamage << "\n";
			cout << "���� ��������: " << &LightRobot::getHeal << "\n";
			cout << "г���� �������: 3" << "\n";
			cout << "���� �����: " << "\n\n";
			break;

		case 6:
			system("cls");
			return 1;

		case 7:
			exit(EXIT_SUCCESS);

		default:
			system("cls");
			cout << "\n������ �����, ��������� �� ���." << "\n\n";
		}

	} while (robotInfoSelector != 7);

	return robotInfoSelector;
}

void displayTeamsInfo(void)
{
	system("cls");
	cout << "����� �����" << "\n\n";
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
				cout << "\n������ �����, ��������� �� ���." << "\n\n";
		}

	} while (menuSelector != 6);

	return 0;
}
