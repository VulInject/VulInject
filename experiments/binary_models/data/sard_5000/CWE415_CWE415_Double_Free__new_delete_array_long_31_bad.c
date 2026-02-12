void bad()
{
    long * data;
    /* Initialize data */
    data = NULL;
    data = new long[100];
    /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
    delete [] data;
    {
        long * dataCopy = data;
        long * data = dataCopy;
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete [] data;
    }
}
