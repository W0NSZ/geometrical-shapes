#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;

class Circle {
private:
	int r;
public:
	Circle() {

	}
	~Circle() {

	}
	void circuit(int r) {
		if (r <= 0) {
			cout << "Warning: this shape is impossible!\n";
			cout << "Circuit: " << 2 * 3.14 * (float)r;
		}
		else {
			cout << "Circuit: " << 2 * 3.14 * (float)r;
		}
	}
	void field(int r) {
		cout << "Field: " << 3.14 * (float)r * (float)r;
	}
};

class Triangle {
private:
	int a, h, b, c;
public:
	Triangle() {

	}
	~Triangle() {

	}
	void circuit(int a, int b, int c) {
		if (a <= 0 || b <= 0 || c <= 0) {
			cout << "Warning: this shape is impossible!\n";
			cout << "Circuit: " << a + b + c;
		}
		else if (a + b < c || a + c < b || b + c < a) {
			cout << "Warning: this triangle is impossible!\n";
			cout << "Circuit: " << a + b + c;
		}
		else {
			cout << "Circuit: " << a + b + c;
		}
	}
	void field(int a, int h) {
		cout << "Field: " << a * h / 2;
	}
};

class Rectangle {
private:
	int a, b;
public:
	Rectangle() {

	}
	~Rectangle() {

	}
	void circuit(int a, int b) {
		if (a <= 0 || b <= 0) {
			cout << "Warning: this shape is impossible!\n";
			cout << "Circuit: " << 2 * (a + b);
		}
		else {
			cout << "Circuit: " << 2 * (a + b);
		}
	}
	void field(int a, int b) {
		cout << "Field: " << a * b;
	}
};

class Trapezoid {
private:
	int a, b, h, c, d;
public:
	Trapezoid() {

	}
	~Trapezoid() {

	}
	void circuit(int a, int b, int c, int d) {
		if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
			cout << "Warning: this shape is impossible!\n";
			cout << "Circuit: " << a + b + c + d;
		}
		else {
			cout << "Circuit: " << a + b + c + d;
		}
	}
	void field(int a, int b, int h) {
		cout << "Field: " << (a + b) * h / 2;
	}
};

class Cube {
private:
	int a;
public:
	Cube() {

	}
	~Cube() {

	}
	void circuit(int a) {
		if (a <= 0) {
			cout << "Warning: this shape is impossible!\n";
			cout << "Circuit: " << a * 12;
		}
		else {
			cout << "Circuit: " << a * 12;
		}
	}
	void field(int a) {
		cout << "Field: " << a * a * 6;
	}
	void volume(int a) {
		cout << "Volume: " << a * a * a;
	}
};

int main()
{
	cout << "Choose your shape:\n";
	cout << "	> circle (cir)\n";
	cout << "	> triangle (tri)\n";
	cout << "	> rectangle (rec)\n";
	cout << "	> trapezoid (tra)\n";
	cout << "	> cube (cub)\n\n";

	cout << "	> help (help)\n";
	cout << "	> exit (exit)\n\n";

	while (1) {
		string command;
		getline(cin, command);
		if (command == "help") {
			cout << "This is a program dedicated to calculating circuits, fields and volume of shapes.\nPlease keep your values intigers.\n\n";
			cout << "Menu syntax:\n";
			cout << "	> [command function] ([command syntax])\n\n";
			cout << "Please use any of the commands above.\n\n";
		}
		else if (command == "exit") {
			exit(0);
		}
		else if (command == "cir") {
			try {
				cout << "Please give following values:\n";
				cout << "	radius: ";
				string rs;
				getline(cin, rs);
				Circle circle1;
				circle1.circuit(stoi(rs));
				cout << endl;
				circle1.field(stoi(rs));
				cout << "\n\n";
			}
			catch(std::exception e){
				cout << "This is not a valid value.\n";
			}
		}
		else if (command == "tri") {
			try {
				cout << "Please give following values:\n";
				cout << "	base: ";
				string as;
				getline(cin, as);
				cout << "	height: ";
				string hs;
				getline(cin, hs);
				cout << "	first leg: ";
				string bs;
				getline(cin, bs);
				cout << "	second leg: ";
				string cs;
				getline(cin, cs);
				Triangle triangle1;
				triangle1.circuit(stoi(as), stoi(bs), stoi(cs));
				cout << endl;
				triangle1.field(stoi(as), stoi(hs));
				cout << "\n\n";
			}
			catch (std::exception e) {
				cout << "Some of the values given are not valid.\n";
			}
		}
		else if (command == "rec") {
			try {
				cout << "Please give following values:\n";
				cout << "	first two sides: ";
				string as;
				getline(cin, as);
				cout << "	other two sides: ";
				string bs;
				getline(cin, bs);
				Rectangle rectangle1;
				rectangle1.circuit(stoi(as), stoi(bs));
				cout << endl;
				rectangle1.field(stoi(as), stoi(bs));
				cout << "\n\n";
			}
			catch (std::exception e) {
				cout << "Some of the values given are not valid.\n";
			}
		}
		else if (command == "tra") {
			try {
				cout << "Please give following values:\n";
				cout << "	base: ";
				string as;
				getline(cin, as);
				cout << "	second base: ";
				string bs;
				getline(cin, bs);
				cout << "	height: ";
				string hs;
				getline(cin, hs);
				cout << "	first leg: ";
				string cs;
				getline(cin, cs);
				cout << "	second leg: ";
				string ds;
				getline(cin, ds);
				Trapezoid trapezoid1;
				trapezoid1.circuit(stoi(as), stoi(bs), stoi(cs), stoi(ds));
				cout << endl;
				trapezoid1.field(stoi(as), stoi(bs), stoi(hs));
				cout << "\n\n";
			}
			catch (std::exception e) {
				cout << "Some of the values given are not valid.\n";
			}
		}
		else if (command == "cub") {
			try {
				cout << "Please give following values:\n";
				cout << "	side: ";
				string as;
				getline(cin, as);
				Cube cube1;
				cube1.circuit(stoi(as));
				cout << endl;
				cube1.field(stoi(as));
				cout << endl;
				cube1.volume(stoi(as));
				cout << "\n\n";
			}
			catch (std::exception e) {
				cout << "This is not a valid value.\n";
			}
		}
		else {
			cout << "Unknown command. Please try using commands from the menu.\n\n";
		}
	}
}

