NS::CLASS nvConn( *conn );
NS::CLASS nvConn( *conn ) (void);
NS::CLASS nvConn( conn );

namespace NS
{
    struct STRUCT
    {
        int _x;
        STRUCT( int x )  : _x( x ) { }
        STRUCT( int* x ) : _x( *x ) { }
    };
}

int main()
{
    NS::STRUCT s0( 42 );
    int i = 42;
    NS::STRUCT s1( i );
    NS::STRUCT s2( *i );
    return 0;
}
