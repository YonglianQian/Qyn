#include <iostream>
#include <vector>
#include <chrono>

class Queen{
private:
int _x;
int _y;
public:
void setx(int x){
    _x=x;
}
void sety(int y){
    _y=y;
}
int getx() const{
    return _x;
}
int gety() const{
    return _y;
}
void print() const{
    std::cout<<"( "<<_x<<","<<_y<<" ) ";
}
bool verify(const Queen& q2) const{
    if (_x==q2.getx())
    {
        return false;
    }
    if (_y==q2.gety())
    {
        return false;
    }
    if (abs(_x-q2.getx())==abs(_y-q2.gety()))
    {
        return false;
    }
    
    return true;
}
};
void display(const Queen& q){
    q.print();
}
bool validation(const std::vector<Queen>& qs){
int len=qs.size();
for (size_t i = 0; i < len; i++)
{
    for (size_t j =i+1; j < len; j++)
    {
        if (!qs[i].verify(qs[j]))
        {
            return false;
        }
        
    }

}
//display result.
std::cout<<"-----------------one solution-----------"<<std::endl;
for (size_t i = 0; i < len; i++)
{
    display(qs[i]);
}
std::cout<<std::endl;
return true;

}
void SearchResult(){
    int sum=0;
    std::vector<Queen> qs(8);
    qs[0].setx(0);
    qs[1].setx(1);
    qs[2].setx(2);
    qs[3].setx(3);
    qs[4].setx(4);
    qs[5].setx(5);
    qs[6].setx(6);
    qs[7].setx(7);
    for (size_t a = 0; a < 8; a++)
    {
        qs[0].sety(a);
        for (size_t b = 0; b < 8; b++)
        {
            qs[1].sety(b);
            for (size_t c = 0; c < 8; c++)
            {
                qs[2].sety(c);
                for (size_t d = 0; d < 8; d++)
                {
                    qs[3].sety(d);
                    for (size_t e = 0; e < 8; e++)
                    {
                        qs[4].sety(e);
                        for (size_t f = 0; f < 8; f++)
                        {
                            qs[5].sety(f);
                            for (size_t g = 0; g < 8; g++)
                            {
                                qs[6].sety(g);
                                for (size_t h = 0; h < 8; h++)
                                {
                                    qs[7].sety(h);
                                    if (validation(qs))
                                    {
                                        sum++;
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            
        }
        
    }
    std::cout<<"Total: "<<sum<<" solution"<<std::endl;
    
}
int main(int argc, char* argv[]){
    std::chrono::steady_clock::time_point tp1=std::chrono::steady_clock::now();
    SearchResult();
    std::chrono::steady_clock::time_point tp2=std::chrono::steady_clock::now();
    std::chrono::duration<double> result=tp2-tp1;
    std::cout<<"Total Consumption: "<<result.count()<<std::endl;
}