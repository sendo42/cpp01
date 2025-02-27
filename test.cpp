#include <iostream>
 
int main()
{
    int aInt0=123;
    int aInt1=456;
    int* aPointer=&aInt0;
    int& aReference=aInt0;
 
    // ポインタはポイント先の変更になる
    aPointer=&aInt1;
    std::cout << "aInt0=" << aInt0 << std::endl;
 
    // 参照は参照先の値の変更になる
    aReference=aInt1;
    std::cout << "aInt0=" << aInt0 << std::endl;
 
    return 0;
}
