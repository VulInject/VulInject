void bad()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    /* Initialize data */
    data = NULL;
    {
        wchar_t * data = *dataPtr1;
        data = new wchar_t[100];
        /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
        delete [] data;
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete [] data;
    }
}
