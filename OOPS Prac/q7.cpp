#include<bits/stdc++.h>
using namespace std;
class Matrix {
    public: int r,c;
    vector<vector<int>>M;
    Matrix(int a,int b) {
        r=a;c=b;
        M.resize(r,vector<int>(c,0));}
    int getRows() {
        return r;}
    int getCol() {
        return c;}
    void setkey(int i, int j, int key) {
        M[i][j] = key;}
    int getkey(int i, int j) {
        return M[i][j];}
    void addMat(Matrix& m) {
        for(int i = 0; i < r; i++) {
            for(int j = 0; j <c; j++) M[i][j]+=m.getkey(i,j);
        }}
    Matrix multiply(Matrix &m) {
        Matrix result(r, m.c);
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < m.c; j++) {
                for (int k = 0; k < c; k++) {
                    result.M[i][j] += M[i][k] * m.getkey(k,j);
                }}}
    return result;} 
    void print() {
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) cout<<M[i][j]<<" ";cout<<endl;}}
};
int main() {
    Matrix M1(2,3), M2(3,2);
    for(int i = 0; i < M1.getRows(); i++) {
        for(int j = 0; j < M1.getCol(); j++) {
            int key;cin>>key;
            M1.setkey(i,j,key);}}
    for(int i = 0; i < M2.getRows(); i++) {
        for(int j = 0; j < M2.getCol(); j++) {
            int key;cin>>key;
            M2.setkey(i,j,key);}}
    Matrix M3 = M1.multiply(M2);
    cout<<"Multiplication\n";M3.print();
}