object foo = class
{
    int bar()
    {
	random();
	class Gnu
	{
	    int gurka()
	    {
		return 17;
	    }
	}()->gurka
	     ();		// TBD: This is anchored wrongly.
    }
}();
