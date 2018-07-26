Foo::Foo() :
    a {
        1,
        2
    },
    b {
        3,
        4
    }
{}

namespace bar {
    Foo::Foo() :
        a {
            1,
            2
        },
        b {
            3,
            4
        }
    {}
}
