#include<iostream>
using namespace std;
class student{
    public:
    void add(int a){
        cout<<"Value of a is" << a<< endl;
    };
    void add(int a,int b){
        cout<<"Sum of a & b is "<< a+b <<endl;
    };
    void add(int a,int b,int c){
        cout<<"Sum of a & b & c is "<< a+b+c <<endl;
}
};
int main (){
    student obj;
    obj.add(10);
    obj.add(10,20);
    obj.add(10,20,30);
};