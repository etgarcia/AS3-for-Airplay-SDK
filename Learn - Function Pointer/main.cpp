#include <iostream>
#include <vector>

float Plus(float num1, float num2) {return num1 + num2;}
float Minus(float num1, float num2) {return num1 - num2;}
float Multiply(float num1, float num2) {return num1 * num2;}
float Divide(float num1, float num2) {return num1 / num2;}

float Calc(float num1, float num2, float (*pCalcMethod)(float, float))
{
    return pCalcMethod(num1, num2);
}

int main()
{
	typedef float (*vfptr)(float, float);
	std::vector<vfptr> pFoo;
	pFoo.push_back(Plus);
	pFoo.push_back(Minus);
	pFoo.push_back(Multiply);
	pFoo.push_back(Divide);    
    float result;
    
    for(int i = 0; i < 4; ++i)
    {
        result = Calc(10, 2, pFoo[i]);
        std::cout << "Result: " << result << std::endl;
    }
	
    system("PAUSE");	
    return 0;
}