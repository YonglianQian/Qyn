#include <iostream>
#include <vector>

class Queen
{
private:
    int _x;
    int _y;

public:
    void setx(int x)
    {
        _x = x;
    }
    void sety(int y)
    {
        _y = y;
    }
    int getx() const
    {
        return _x;
    }
    int gety() const
    {
        return _y;
    }
    void print() const
    {
        std::cout << "( " << _x << "," << _y << " ) ";
    }
    bool verify(const Queen &q2) const
    {
        if (_x == q2.getx())
        {
            return false;
        }
        if (_y == q2.gety())
        {
            return false;
        }
        if (abs(_x - q2.getx()) == abs(_y - q2.gety()))
        {
            return false;
        }
        return true;
    }
};

std::ostream &operator<<(std::ostream &os, const Queen &q)
{
    q.print();
    return os;
}
bool validate(const std::vector<Queen> &v)
{
    int len = v.size();
    for (size_t i = 0; i < len; i++)
    {
        for (size_t j = i + 1; j < len; j++)
        {
            if (!v[i].verify(v[j]))
            {
                return false;
            }
        }
    }

    // successful
    // print one solution.
    std::cout << "----------------print solution-----------" << std::endl;

    for (size_t i = 0; i < len; i++)
    {
        std::cout << v[i];
    }
    std::cout << std::endl;

    return true;
}

//递归计数，使用第三参数，移除全局变量
//static int sum = 0;

//核心递归，遍历每一种八个皇后位置，8的8次方
void find(std::vector<Queen> &qs, int n, int& sum)
{
    for (size_t j = 0; j < 8; j++)
    {
        qs[n].sety(j);
        
        //初次调用的时候，此时状态为find(qs,0)
        //qs[7],qs[6]...qs[0]的y坐标皆为0.然后
        //qs[0]的y坐标开始设置为1,2...7,
        //检验结果为false以后(8个y坐标显然不对），开始回到上一个循环递增qs[1]的坐标从0到1,2,3...7.
        //每次递增以后，又回到qs[7]的y坐标循环递增0,1,2,3...7
        //以此往复，循环遍历每个qs[n]的y坐标设置。并检查该状态下qs各个皇后的位置逻辑是否合规。
        if (n == 0)
        {
            if (validate(qs))
            {
                sum++;
            }
        }
        else
        {
            find(qs, n - 1,sum);
        }
    }
}
int main(int argc, char *argv[])
{
    auto start = std::chrono::steady_clock::now();
    std::vector<Queen> qs(8);
    //初始化八个皇后，每行一个
    for (size_t i = 0; i < 8; i++)
    {
        qs[i].setx(i);
    }
    int sum=0;
    find(qs,7,sum);
    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double> result = (end - start);
    std::cout << "Total consumption: " << result.count() << std::endl;
    std::cout << sum << std::endl;
}