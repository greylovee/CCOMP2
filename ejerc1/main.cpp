#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

template < class T> class Stack ;

template < class T>
 Stack <T> operator +( const Stack <T> &s1 , const Stack <T> &s2)
 {
    Stack <T> result = s1;

    for ( unsigned i = 0; i < s1. items . size (); ++i) {
    result . items . push_back (s2. items [i]);
 }
 return result ;
 }
 template < class T>
 Stack<T> operator -(const Stack <T> &s1 ,const Stack <T> &s2)
 {
     Stack <T> result;
    bool esta;
     for (int i=s1.items.size() - 1;i>=0;--i)
     {
         esta=false;
         for(int j=s2.items.size()-1;j>=0;--j)
            if(s1.items[i]==s2.items[j])
                esta=true;
        if(esta==false)
            result.items.push_back(s1.items[i]);
     }
     return result;
 }

 template < class T>
 class Stack {
    friend Stack <T> operator +<>( const Stack <T> &s1 , const Stack <T> &s2);
    friend Stack <T> operator -<>( const Stack <T> &s1 , const Stack <T> &s2);
    vector <T> items ;
    public :
    bool empty () const {
        return items . empty ()
        ;}
    void push ( const T & item ) {
        items . push_back ( item )
        ;}
    T pop () {
        T last = items . back ();
        items . pop_back ();
        return last ;
    }
    void print ()
    {
        for (int i=0; i<items.size();i++)
            cout<<items[i]<<" "<<endl;
    }
 };

int main()
{
    Stack <int > a, b;
    a. push (1) ;
    a. push (3) ;
    b. push (3) ;
    b. push (4) ;
    //Stack <int > c = a + b;
    Stack <int > e =a - b;
    //c.print();
    e.print();



}

