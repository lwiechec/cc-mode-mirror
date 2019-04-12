#include <iostream>
struct T {
    void a_method() && {
	std::cout << "rvalue ref\n";
    }
    void a_method() const& {
	std::cout << "lvalue const ref\n";
    }
    void a_method() const {
	std::cout << "without a ref-qualifier\n";
    }
    auto a_method() && -> void {
	std::cout << "rvalue ref; '->' notation\n";
    }
    auto a_method() -> T& {
	return *this;
    }
};
