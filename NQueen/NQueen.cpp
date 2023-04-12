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
        std::cout << "(" << _x << "," << _y << ") ";
    }
    bool verify(const Queen &q) const
    {
        if (_x == q.getx())
        {
            return false;
        }
        if (_y == q.gety())
        {
            return false;
        }
        if (abs(_x - q.getx()) == abs(_y - q.gety()))
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
bool validate(const std::vector<Queen> &qs)
{
    int len = qs.size();
    for (size_t i = 0; i < len; i++)
    {
        for (size_t j = i + 1; j < len; j++)
        {
            if (!qs[i].verify(qs[j]))
            {
                return false;
            }
        }
    }
//打印每一个解决方案
std::cout<<"-------------------print one solution----------------"<<std::endl;
for (size_t i = 0; i < len; i++)
{
    std::cout<<qs[i];
}
std::cout<<std::endl;
    return true;
}
void SearchAllResult(std::vector<Queen>& qs, int n, int& sum, int a){
for (size_t i = 0; i < a; i++)
{
    qs[n].sety(i);
    if (n==0)
    {
        if (validate(qs))
        {
            sum++;
        }
        
    }else{
         SearchAllResult(qs,n-1, sum,a);
    }
    
}

}
int main(int argc, char *argv[])
{
    std::cout<<"Please input N"<<std::endl;
    int n;
    std::cin>>n;
    std::cout<<"got that! calculating result...."<<std::endl;
    std::vector<Queen> qs(n);
    //每行一个
    for (size_t i = 0; i < n; i++)
    {
        qs[i].setx(i);
    }
    
    int sum=0;
    SearchAllResult(qs,n-1,sum,n);
    std::cout <<"Total solution: "<<sum<< std::endl;
}