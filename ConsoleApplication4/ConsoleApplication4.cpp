#include <iostream>
void age()
{
    int user_age = 0;
    std::cin >> user_age;
    if (user_age >= 18) {
        std::cout << "you're welcome\n";
    }
    else {
        std::cout << "entrance denied\n";

    }
}
void random()
{
    int f = rand();
    std::cout << f;

}

int main()
{
    int a = 2;
    int b = 5;
    int i = b + a;
    int o = b - a;
    int p = b * a;
    int j = b / a;
    int k = b % a;

    std::cout << i << "\n";
    std::cout << o << "\n";
    std::cout << p << "\n";
    std::cout << j << "\n";
    std::cout << k << "\n";
    age();
    random();
}


