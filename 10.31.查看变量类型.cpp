#include<typeinfo>
using std::cout;
int main()
{
    int i;
    cout << typeid(i).name();
    //������Ϊint
    return 0;
}
