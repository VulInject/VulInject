void bad()
{
    wchar_t * data;
    /* Initialize data */
    data = NULL;
    data = new wchar_t;
    /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
    delete data;
    badStatic = 1; /* true */
    badSink(data);
}
