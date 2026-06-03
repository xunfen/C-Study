#include <iostream>
using namespace std;

class Cube
{
public:
    void setL(int l)
    {
        L = l;
    }
    void setW(int w)
    {
        W = w;
    }
    void setH(int h)
    {
        H = h;
    }

    int getL()
    {
        return L;
    }
    int getW()
    {
        return W;
    }
    int getH()
    {
        return H;
    }

    int getS()
    {
        return 2 * L * W + 2 * L * H + 2 * W * H;
    }
    int getV()
    {
        return L * W * H;
    }

private:
    int L; // 长
    int W; // 宽
    int H; // 高
};

bool isSame(Cube &c1, Cube &c2);

int main()
{
    Cube c;
    c.setL(10);
    c.setW(5);
    c.setH(2);
    cout << "长：" << c.getL() << endl;
    cout << "宽：" << c.getW() << endl;
    cout << "高：" << c.getH() << endl;
    cout << "体积：" << c.getV() << endl;
    cout << "表面积：" << c.getS() << endl;
    cout << "--------------------------------------------------------------------------------" << endl;

    Cube c2;
    c2.setL(5);
    c2.setW(10);
    c2.setH(2);
    cout << "长：" << c2.getL() << endl;
    cout << "宽：" << c2.getW() << endl;
    cout << "高：" << c2.getH() << endl;
    cout << "体积：" << c2.getV() << endl;
    cout << "表面积：" << c2.getS() << endl;
    cout << "--------------------------------------------------------------------------------" << endl;

    cout << "两个立方体是否相同：" << isSame(c, c2) << endl;
}

bool isSame(Cube &c1, Cube &c2)
{
    if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
    {
        return true;
    }
    else
    {
        return false;
    }
}
