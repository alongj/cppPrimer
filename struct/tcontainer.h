//
// Created by 邵军 on 2019/3/21.
//

#ifndef CPPPRIMER_TCONTAINER_H
#define CPPPRIMER_TCONTAINER_H

#include <iostream>

using namespace std;

template <typename T>
struct tcontainer{
    virtual void push(const T &) = 0;
    virtual void pop() =0;
    virtual const T& begin()=0;
    virtual const T& end()=0;
    virtual size_t size()=0;

};

template <typename T>
struct tvector : public tcontainer<T> {
private:
    size_t _size;
    size_t _cap;
    T* buf;
public:
    static const size_t _step =100;

    tvector(){
        _size = 0;
        _cap = _step;
        buf = 0;
        re_capacity(_cap);
    }

    ~tvector(){
        free(buf);
    }

    void re_capacity(size_t s)
    {
        if(!buf)
        {
            buf = (T*) malloc(sizeof(T) * s);
        } else {
            buf = (T*) realloc(buf, sizeof(T) * s);
        }
    }

    virtual void push(const T &t)
    {
        if(_size >= _cap) {
            re_capacity(_cap+=_step);
        }
        buf[_size++] = t;

    }

    virtual void pop()
    {
        if(_size)
            _size--;
    }

    virtual const T& begin()
    {
        return buf[0];
    }

    virtual const T& end()
    {
        if(_size)
            return buf[_size - 1];
    }

    virtual size_t size()
    {
        return _size;
    }

    const T& operator[](size_t i){
        if(i >=0 && i< _size)
            return buf[i];
    }

};


#endif //CPPPRIMER_TCONTAINER_H
