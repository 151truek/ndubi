#include <iostream>
#include "tempcalc.h"
using namespace std;
int main (int argc, char *agrv[])
{
int sum, a=2, b=5;
float floatsum=0.0 ,floata=2.3,floatb=4.5;

calculator<int>calc;
calculator<float>fcalc;

sum=calc.add(a,b);
cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum<<endl;

floatsum= fcalc.add(floata, floatb);
cout<<"The sum of float"<<floata<<" and "<<floatb<<"is: "<<floatsum<<endl;

return 0;
}
