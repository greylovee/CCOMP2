
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
    result . items . push_front (s2. items [i]);
 }
 return result;
 }
 template < class T>
 class Stack {
 friend Stack <T> operator +<>( const Stack <T> &s1 , const Stack <T> &s2);
 vector <T> items;










 };
