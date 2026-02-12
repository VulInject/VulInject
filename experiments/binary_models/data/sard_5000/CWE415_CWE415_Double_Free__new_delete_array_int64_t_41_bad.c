void bad()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    data = new int64_t[100];
    /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
    delete [] data;
    badSink(data);
}
