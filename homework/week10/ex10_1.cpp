#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.14;

class Circle
{
private:
	double x0;
	double y0;
	double radius;

public:
	Circle() : x0(0.0), y0(0.0), radius(1.0) {}
	Circle(double r, double x, double y) {
		x0 = x;
		y0 = y;
		if (r < 0.0) radius = 0.0;
		else radius = r;
	}

	void setRadius(double r) {
		if (r < 0.0) radius = 0.0;
		else radius = r;
	}

	void setCenter(double x, double y) {
		x0 = x;
		y0 = y;
	}

	double getArea() const {
		return PI * radius * radius;
	}

	double getPerimeter() const {
		return 2.0 * PI * radius;
	}
	bool contains(double px, double py) const {
		double dx = px - x0;
		double dy = py - y0;
		double dist2 = dx * dx + dy * dy;
		return dist2 <= radius * radius + 1e-12;
	}
};

int main()
{
	double x, y, r;
	cout << "円の中心座標 x0, y0 と半径 r を入力してください (スペースで区切る) \n";
	cout << "> ";
	if (!(cin >> x >> y >> r)) return 0;

	Circle c(r, x, y);

	cout << fixed << setprecision(2);
	cout << "周長 = " << c.getPerimeter() << "\n";
	cout << "面積 = " << c.getArea() << "\n";

	if (c.contains(0.0, 0.0))
		cout << "この円は原点(0,0)を含みます。\n";
	else
		cout << "この円は原点(0,0)を含みません。\n";

	return 0;
}