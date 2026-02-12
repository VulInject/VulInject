void bad()
{
    wchar_t * data;
    /* Initialize data */
    data = NULL;
    if(staticTrue)
    {
        data = new wchar_t[100];
        /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
        delete [] data;
    }
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete [] data;
    }
}
