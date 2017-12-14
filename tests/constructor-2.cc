struct TheClass
{
    int theABC, abcMode, theThing, abcConfig;

    TheClass( void ) throw( TheClass::XMLInitFailedException )
        :  theABC( 0 ),
           abcMode( someNn ),
           theThing( 0 ),
           abcConfig( 0 )
    {
// do not do anything!
    }

    ~TheClass( void ) { }
};
