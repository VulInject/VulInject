void bad()
{
    FILE * data;
    FILE * &dataRef = data;
    data = NULL;
    /* POTENTIAL FLAW: Open a file without closing it */
    data = fopen("BadSource_fopen.txt", "w+");
    {
        FILE * data = dataRef;
        /* FLAW: No attempt to close the file */
        ; /* empty statement needed for some flow variants */
    }
}
