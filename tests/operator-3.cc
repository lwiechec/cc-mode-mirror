struct SomeClass
{
    SomeClass operator-( void ) const;
    SomeClass operator+( const SomeClass& rhs ) const;
    SomeClass operator-( const SomeClass& rhs ) const;
    SomeClass operator*( const SomeClass& rhs ) const;
    SomeClass operator/( const SomeClass& rhs ) const;
    SomeClass operator%( const SomeClass& rhs ) const;
    SomeClass operator~( void ) const;
    SomeClass operator&( const SomeClass& rhs ) const;
    SomeClass operator|( const SomeClass& rhs ) const;
    SomeClass operator^( const SomeClass& rhs ) const;
    SomeClass operator<<( const SomeClass& rhs ) const;
    SomeClass operator>> ( const SomeClass& rhs ) const;
};
