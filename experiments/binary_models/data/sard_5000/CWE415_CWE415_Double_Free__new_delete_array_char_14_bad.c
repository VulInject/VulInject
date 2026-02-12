void bad()
{
    char * data;
    /* Initialize data */
    data = NULL;
    if(globalFive==5)
    {
        data = new char[100];
        /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
        delete [] data;
    }
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete [] data;
    }
}
