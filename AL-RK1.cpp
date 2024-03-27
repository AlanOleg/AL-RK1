#include <iostream>
using namespace std;

class square
{
private:
    double a;
public:
    square(double a)
    {
    	this->a = a;
    }
    
    double area()
    {
    	return a * a;
    }
};

int main(){
	square EGOR(5);
	cout << "S = " << EGOR.area();
}