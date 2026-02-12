void bad()
{
    wchar_t * data;
    unionType myUnion;
    /* Initialize data */
    data = NULL;
    data = new wchar_t[100];
    /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
    delete [] data;
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete [] data;
    }
}
