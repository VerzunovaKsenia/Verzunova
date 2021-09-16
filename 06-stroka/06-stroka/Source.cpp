#include <iostream>
int main (){
char n;
std::cout<<"Введите строку\n ";
std::cin>>n;
std::cout<<"Копия строки ";
while (n != 0 )
{
    std::cout<<n;
    std::cin>>n;
}
return 0;
}
