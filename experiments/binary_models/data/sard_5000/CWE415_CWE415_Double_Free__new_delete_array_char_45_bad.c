void bad()
{
    char * data;
    /* Initialize data */
    data = NULL;
    data = new char[100];
    /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
    delete [] data;
    badData = data;
    badSink();
}
