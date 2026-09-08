``` c++
#include <iostream>
int main()
{
    int a, b;
    std::cout << "Enter 1'st number: ";
    std::cin >> a;
    std::cout << std::endl;
    std::cout << "Enter 2'nd number: ";
    std::cin >> b;
    std::cout << std::endl;
    std::cout << "Sum: " << a + b << std::endl;
    std::cout << "Diff: " << a - b << std::endl;
    std::cout << "Mult: " << a * b << std::endl;
    std::cout << "Div: " << a / b << std::endl;
    return 0;
}
```
	Убрано "using namespace std" из за того что некоторые онлайн-компиляторы ругаются. Если у вас проблем не возникает убирайте std:: и ставьте namespace.
