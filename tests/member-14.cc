namespace MyNs
{
   /// \struct SomeStruct
   ///
   /// \ddddd ddddddddd dddddddddd ddd fddddddd dd ddd ddd dddddddddddd
   ///        ffffffffffffffffffffffffffffffffffffffffffffff.
   ///
   /// \note ddddddddddddddddddddddddddddddddddddddddddddddddd
   ///       ffffffffffffffffffffffffffffffffffffffffffffffffffffffff

   struct SomeStruct
   {
      /// List of firstOne.
      const ModAlRe::ABunch&          firstOne;
      ModAlRe::ABunch::const_iterator theIt;
      bool                                   theOneInit;

      /// Signal initial values
      ///
      /// dddd ff qqqqqqq iwwwwww fr5ess.
      std::list<int>                         theseValues;
      std::list<int>::iterator               ivIterator;
      bool                                   ivItInit;

      ThisType*                              typegndel;
      unsigned int                           idx;

      SomeStruct( const ModAlRe::ABunch& s,
                       const std::list<int>&         i,
                       /*const*/ ThisType*           tih = nullptr )
      : firstOne( s ),
        theIt(),
        theOneInit( false ),
        theseValues( i ),
        ivIterator(),
        ivItInit( false ),
        typegndel( tih ),
        idx( 0 )
      {
      }

      /// \brief STATEFUL function to return the next system signal
      const ModAlRe::SystemSignal* getTheNextOnePlease( void );

      /// \brief STATEFUL function to return the next initial value
      int                          getTheOtherNextOnePlease( void );
      bool                         doesItHaveItAll( void );
   };
}
