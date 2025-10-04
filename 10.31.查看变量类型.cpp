#include<typeinfo>
using std::cout;
int main()
{
    int i;
    cout << typeid(i).name();
    //输出结果为int
    return 0;
}
