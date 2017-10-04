foo() {}
bar (x) {}
main (argc, argv) {}

/* The following are now recognized correctly as
 * declarations.  2017-10. */

main (argc, argv)
    int argc;
    char *argv;
{}

foo();
bar (x);
main (argc, argv);
