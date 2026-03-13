#include "triangle.h"
using namespace std;
double perimetr(double a, double b, double c){
    return a+b+c;
}
double square(double a, double b, double c){
    double p= perimetr(a, b, c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
int triangle(){
    double a, b, c;
    cout<<"Стороны треугольника: ";
    cin>>a>>b>>c;
    if(a+b<=c || a+c<=b || b+c<=a){
        cout<<"Error, does not exist"<<endl;
        return 1;
    }
    if(a==b || a==c || b==c){
        cout<<"Равнобедренный"<<endl;
    }
    else{
        cout<<"Не равнобедренный"<<endl;
    }
    cout<<"Периметр: "<<perimetr(a, b, c)<<endl;
    cout<<"Площадь: "<<square(a, b, c)<<endl;
    return 0;
}
