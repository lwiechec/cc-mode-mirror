struct C {
    C([[maybe_unused]] int x, int y)
	: a(y)
    {}
    int a;
};

struct S {
    S[[using : const]]()
        : data(0)
    {}
    int data;
};
