void bad()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = new wchar_t;
        /* Initialize and make use of data */
        *data = L'A';
        printHexCharLine((char)*data);
    }
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}
