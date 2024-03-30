//
//  main.cpp
//  midterm
//
//  Created by Nguyễn Bảo An on 30/3/24.
//


#include "Header.h"

int main() {
    
//    int x = 0;
//    vector<float> a = {1,2,3,4,5,6};
//    vector<float> b = {7,8,9};
//    int e[] = {1,3,4,5,19};
//    arrayInput(a);
//    arrayInputV2(a);
//    intArrayMake(a, e, 5);
//    intArrayOut(a, cout);
//    arrayOutput(a);
//    intArrayCat(a, b);
//    intArrayOut(a, cout);
//    float* y = (float*)&x;
//    int* z = &x;
//    cout << &y << endl << &z;
//    int* a;
//    capphatdong(&a, 3);
//    outtest(a, 3);
    int b = 3;
    int *a = &b;
//    cout << do_sth(&a);
    cout << *a << endl;
    do_sth(3, a);
    cout << *a << endl;
    cout << b << endl;
    return 0;
}
