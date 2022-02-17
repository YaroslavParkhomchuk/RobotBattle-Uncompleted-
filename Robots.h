#pragma once

#include <iostream>
#include <string>
using namespace std;

class Robot
{
public:
	Robot(string _name, int _health, int _damage, int _heal)
	{
		_name = name;
		_health = health;
		_damage = damage;
		_heal = heal;
	}
 
	string getName();
	int getHealth();
	int getDamage();
	int getHeal();
	void printInfo();
	void attackRobot(Robot robot);
	void healRobot(Robot robot);
	void setHealth(int _health);

	friend istream& operator>>(istream& in, Robot& robot);
	friend ostream& operator<< (ostream& out, const Robot& robot)
	{
		out << robot.health;
		out << robot.damage;
		out << robot.heal;
		return out;
	}

protected:
	string name;
	int health = 1000;
	int damage = 100;
	int heal = 100;
};

class LightRobot : public Robot
{
public:
	LightRobot(string _robot_ñlass, string _name, int _health, int _damage, int _heal) 
		: Robot(_name, (int)(_health * LR_Health_Mult),(int)( _damage * LR_Damage_Mult), (int)(_heal * LR_Heal_Mult)), robot_ñlass(_robot_ñlass)
	{}

	string getRobotClass() const
	{
		return robot_ñlass;
	}

	void attackRobot(Robot robot)
	{
		robot.setHealth(robot.getHealth() - this->getDamage());
	}

private:
	string robot_ñlass = "Ëåãêèé ðîáîò";
	double LR_Health_Mult = 0.75;
	double LR_Damage_Mult = 1.6;
	double LR_Heal_Mult = 0;
};

class MediumRobot : public Robot
{
public:
	MediumRobot(string _robot_class, string _name, int _health, int _damage, int _heal)
		: Robot(_name, (int)(_health* MR_Health_Mult), (int)(_damage* MR_Damage_Mult), (int)(_heal* MR_Heal_Mult)), robot_ñlass(_robot_class)
	{}

	string getRobotClass() const
	{
		return robot_ñlass;
	}

	void attackRobot(Robot robot)
	{
		robot.setHealth(robot.getHealth() - this->getDamage());
	}

private:
	string robot_ñlass = "Ñåðåäí³é ðîáîò";
	double MR_Health_Mult = 1.15;
	double MR_Damage_Mult = 1;
	double MR_Heal_Mult = 0;
};

class HeavyRobot : public Robot
{
public:
	HeavyRobot(string _robot_class, string _name, int _health, int _damage, int _heal)
		: Robot(_name, (int)(_health* HR_Health_Mult), (int)(_damage* HR_Damage_Mult), (int)(_heal* HR_Heal_Mult)), robot_ñlass(_robot_class)
	{}

	string getRobotClass() const
	{
		return robot_ñlass;
	}

	void attackRobot(Robot robot)
	{
		robot.setHealth(robot.getHealth() - this->getDamage());
	}

private:
	string robot_ñlass = "Âàæêèé ðîáîò";
	double HR_Health_Mult = 1.5;
	double HR_Damage_Mult = 0.75;
	double HR_Heal_Mult = 0;
};

class DemolisherRobot : public Robot
{
public:
	DemolisherRobot(string _robot_class, string _name, int _health, int _damage, int _heal)
		: Robot(_name, (int)(_health* DR_Health_Mult), (int)(_damage* DR_Damage_Mult), (int)(_heal* DR_Heal_Mult)), robot_ñlass(_robot_class)
	{}

	string getRobotClass() const
	{
		return robot_ñlass;
	}

	void attackRobot(Robot robot)
	{
		robot.setHealth(robot.getHealth() + this->getDamage());
	};

private:
	string robot_ñlass = "Ðîáîò-ï³äðèâíèê";
	double DR_Health_Mult = 0.5;
	double DR_Damage_Mult = 1.75;
	double DR_Heal_Mult = 0;
};


class MedicRobot : public Robot
{
public:
	MedicRobot(string _robot_class, string _name, int _health, int _damage, int _heal)
		: Robot(_name, (int)(_health* MedicR_Health_Mult), (int)(_damage* MedicR_Damage_Mult), (int)(_heal* MedicR_Heal_Mult)), robot_ñlass(_robot_class)
	{}

	string getRobotClass() const
	{
		return robot_ñlass;
	}

	void healRobot(Robot robot)
	{
		robot.setHealth(robot.getHealth() + this->getHeal());
	};

private:
	string robot_ñlass = "Ðîáîò-ìåäèê";
	double MedicR_Health_Mult = 0.95;
	double MedicR_Damage_Mult = 0;
	double MedicR_Heal_Mult = 1.5;
};

string Robot::getName()
{
	return name;
}

int Robot::getHealth()
{
	return health;
}

int Robot::getDamage()
{
	return damage;
}

int Robot::getHeal()
{
	return heal;
}

void Robot::attackRobot(Robot robot)
{
	robot.setHealth(robot.getHealth() - this->getDamage());
}

void Robot::healRobot(Robot robot)
{
	robot.setHealth(robot.getHealth() + this->getHeal());
};

void Robot::setHealth(int _health)
{
	this->health = _health;
}