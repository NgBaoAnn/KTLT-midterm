//
//  Header.h
//  midterm
//
//  Created by Nguyễn Bảo An on 30/3/24.
//

#ifndef Header_h
#define Header_h
#include <iostream>
#include <vector>

using namespace std;

void arrayInput(vector<float> &a){
    int n; cin >> n;
    if (n < 1) return;
    a.resize(n);
    for (int i = 0; i < a.size(); ++i){
        cin >> a[i];
    }
}
void arrayOutput(vector<float> &a) {
    for (int i = 0; i < a.size(); ++i){
        cout << a[i] << " ";
    }
}
void arrayInputV2(vector<float> &a){
    float x;
    while (cin >> x) {
        a.push_back(x);
    }
    cin.clear();
}
void intArrayMake(vector<float> &a, int e[], int n){
    a.resize(0);
    for (int i = 0; i < n; ++i) {
        a.push_back(e[i]);
    }
}
void intArrayOut(vector<float> a, ostream& outDev) {
    for (int i = 0; i < a.size(); ++i) {
        outDev << a[i] << " ";
    }
}
void intArrayCat(vector<float> &dest, vector<float> &src){
    unsigned long s1 = dest.size(), s2 = src.size();
    unsigned long idx = s1, newsize = s1 + s2;
    dest.resize(newsize);
    for (int i = 0; i < newsize; i++) {
        dest[idx] = src[i];
        idx++;
    }
}
void capphatdong(int* a, int n) {
    a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = i;
    }
}
void outtest(int* a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
void do_sth(int num, int* a){
    *a = num + 2;
}
#endif /* Header_h */
