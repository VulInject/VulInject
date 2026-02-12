void bad()
{
    wchar_t * data;
    /* Initialize data */
    data = NULL;
    data = new wchar_t;
    *data = L'A';
    /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
    delete data;
    /* POTENTIAL FLAW: Use of data that may have been deleted */
    printWcharLine(*data);
    /* POTENTIAL INCIDENTAL - Possible memory leak here if data was not deleted */
}
