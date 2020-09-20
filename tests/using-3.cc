class A {
protected:
    int foo;
    int bar;
};

class B : A {
    using A::foo, A::bar;
};
    
    
