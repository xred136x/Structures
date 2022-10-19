// шаблон
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<cmath>
using namespace std;

struct date {
	int day{};
	int month{};
	int year{};

};

struct person {
	string name;
	date birthday;
	int salary = 0;
};

void show_person(person &P) {
	cout << "Name: " << P.name << '\n';// 
	cout << "Date birthday:" << P.birthday.day << '.' <<
		P.birthday.month << '.' << P.birthday.year << '\n';

	cout << "Salary: " << P.salary << '\n';
}

person input_person() {
	person tmp;
	cout << "Введите имя: ";
	cin.ignore();
	getline(cin, tmp.name);
	cout << "введите дату рождения: \n";
	cin >> tmp.birthday.day >>
		tmp.birthday.month >>
		tmp.birthday.year;
	cout << "введите зарплату: \n";
	cin >> tmp.salary;
	return tmp;
}

void fill_person(person &P) {

	cout << "Введите имя: ";
	cin.ignore();
	getline(cin, P.name);
	cout << "введите дату рождения: \n";
	cin >> P.birthday.day >>
		P.birthday.month >>
		P.birthday.year;
	cout << "введите зарплату: \n";
	cin >> P.salary;
	
} 

struct persona {
	string name;
	int age = 0;
	int coins[5]{};
};

void show_persona(persona &P) {
	cout << "Name: " << P.name << '\n';
	cout << "Age: " << P.age << '\n';
	cout << "Coins: ";
	for (int i = 0; i < 5; i++)
		cout << P.coins[i] << ' ';
	cout << '\n';
}

inline int year_of_birth(persona& P, int year) {
	return year - P.age;
}

int cash(persona& P) {
	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += P.coins[i];
	return sum;
}

struct point {
	int x = 0;
	int y = 0;
};

int compare_distance(point& P1, point& P2) {
	int dist1 = sqrt(pow(0 - P1.x, 2) + pow(0 - P1.y, 2));
	int dist2 = sqrt(pow(0 - P2.x, 2) + pow(0 - P2.y, 2));
	if (dist1 > dist2)
		return 1;
	if (dist1 < dist2)
		return -1;
	return 0;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	// Просто структура person
	/*struct person {// объявление структуры персон. Для ее реализации создаются объекты р1 и р2
		string name = "noname";
		int age = 18;
		string position = "programer";
		int salary = 15000;
	} p1, p2{"Bob Thomas", 40, "director", 120000};

	// обращение к полям объекта структуры
	p1.name = "Tom Smit";
	p1.age = 22;
	//p1.position = "Manager";
	p1.salary = 50000;

	cout << "Name: " << p1.name << '\n';
	cout << "Age: " << p1.age << '\n';
	cout << "Position: " << p1.position << '\n';
	cout << "Salary: " << p1.salary << '\n';
	cout << "---------------------------------\n";
	cout << "Name: " << p2.name << '\n';
	cout << "Age: " << p2.age << '\n';
	cout << "Position: " << p2.position << '\n';
	cout << "Salary: " << p2.salary << '\n';
	// изменение всего содержимого объекта структуры

	p2 = { "Adam Thomas", 41, "President", 5000000 };

	// прямое присваивание полям объекта р2 значений из полей р1

	p2 = p1;

	// альтернативный способ создания объекта структуры

	person p3{ "Jake Home", 30, "policeman", 45000 };
	cout << "---------------------------------\n";
	cout << "Name: " << p3.name << '\n';
	cout << "Age: " << p3.age << '\n';
	cout << "Position: " << p3.position << '\n';
	cout << "Salary: " << p3.salary << '\n';*/

	// 
	/*person p4;
	p4.name = "Tom Smith";
	//p4.birthday.day = 1;
	//p4.birthday.month = 1;
	//p4.birthday.year = 1970;
	p4.birthday = { 1, 1, 1970 };
	p4.salary = 50000;

	person p5{
		"Bob Tomas",
		{5, 10, 2000},
		20000
	};

	person* pp5 = &p5;

	cout << "Name: " << pp5->name << '\n';// 
	cout << "Date birthday:" << pp5->birthday.day << '.' <<
		pp5->birthday.month << '.' << pp5->birthday.year << '\n';

	cout << "Salary: " << pp5->salary << '\n';
	cout << "---------------------------------\n";

	show_person(p4);

	//person p6 = input_person();
	person p6;
	fill_person(p6);
	cout << "---------------------------------\n";
	show_person(p6);*/

	// Задача 1 Персона смонетами
	/*cout << "Объект: " << '\n';

	persona A{ " Nick Jackobs",
		20,
		{1, 2, 2, 5, 1}
	};

	show_persona(A);

	cout << "Год рождения: " << year_of_birth(A, 2022) << '\n';
	cout << "общие сбережения: " << cash(A) << '\n';*/

	// Задача 2 Координаты

	cout << "Точка А: ";
	point A{ 4, -1 };
	cout << A.x << ", " << A.y << '\n';
	point B{ 6, -2 };
	cout << "Точка В: " << B.x << ", " << B.y << '\n';
	cout << compare_distance(A, B) << '\n';
	return 0;
}