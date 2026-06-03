#include <iostream>
using namespace std;

class Point
{
private:
    int X;
    int Y;

public:
    void setX(int x)
    {
        X = x;
    }

    void setY(int y)
    {
        Y = y;
    }

    int getX()
    {
        return X;
    }

    int getY()
    {
        return Y;
    }
};

class Circle
{
private:
    int r;
    Point Center;

public:
    void setR(int r)
    {
        this->r = r;
    }
    int getR()
    {
        return r;
    }

    void setCenter(Point Center)
    {
        this->Center = Center;
    }
    Point getCenter()
    {
        return Center;
    }
};


void isInCircle(Point &P, Circle &C)
{
    int distance =
        (C.getCenter().getX() - P.getX()) * (C.getCenter().getX() - P.getX()) +
        (C.getCenter().getY() - P.getY()) * (C.getCenter().getY() - P.getY());

    int rDistance = C.getR() * C.getR();

    if (distance < rDistance)
    {
        cout << "点在圆内" << endl;
    }
    else if (distance == rDistance)
    {
        cout << "点在圆上" << endl;
    }
    else
    {
        cout << "点在圆外" << endl;
    }
}

int main()
{
    Circle c;
    c.setR(10);
    Point center;
    center.setX(10);
    center.setY(10);
    c.setCenter(center);

    Point p;
    p.setX(10);
    p.setY(00);
    isInCircle(p, c);

    return 0;
}