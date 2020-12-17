//
// Created by 邵军 on 2019/3/1.
//

#include <stdio.h>

class A {
public:
    A() {
        m_a = 1;
        m_b = 2;
    }
    ~A(){}
    void fun(){
        printf("%d%d", m_a,m_b);
    }
private:
    int m_a;

    int m_b;
};

class B{
public:
    B(){
        m_c = 3;
    }
    ~B(){}.
    void fun()
    {
        printf("%d", m_c);
    }


private:
    int m_c;
};


int main(){
    A a;
    B *b = (B *) (&a);

    b->fun();
}