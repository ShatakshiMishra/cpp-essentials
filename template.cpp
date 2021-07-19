#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
    private:
        T a;
        T b;
    public:
        Arithmetic(T a,T b);
        T add();
        T subs();
};

template <class T> 
 Arithmetic<T>::Arithmetic(T a,T b)
{
    this->a=a;
    this->b=b;
}
template <class T> 
T Arithmetic<T>::add()
{
    
    return (a+b);
}
template <class T> 
T Arithmetic <T>::subs()
{
    return (a-b);
}
template <class T>
T Mmin(T a,T b)
{
    T min;
    min=a>b?b:a;
    return min;
}
int main()
{
    Arithmetic<int> a(8,3);
    Arithmetic<float> b(1.0,4.0);
    cout<<(int)a.add();
    cout<<(float)b.add(); 
    cout<<(float)a.subs();
    cout<< Mmin<int>(5,6);
}
