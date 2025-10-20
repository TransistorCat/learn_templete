#include <iostream>

template<typename T>
T max(T a,T b){
    return a>b ? a:b;
}

struct Test{
    int v_{};
    Test()=default;
    Test(int v):v_(v){}
    bool operator>(const Test& t) const{
        return this->v_ > t.v_ ;
    }
};

int main(){
    int a{1};
    int b{2};

    std::cout<<"max(a,b): "<<::max(a, b)<<'\n';
    Test t1{10};
    Test t2{20};
    std::cout<<"max(t1,t2): " <<::max(t1,t2).v_<<'\n';
    // std::cout<<"max(t1,t2): " <<::max<Test>(t1,t2).v_<<'\n';
}
