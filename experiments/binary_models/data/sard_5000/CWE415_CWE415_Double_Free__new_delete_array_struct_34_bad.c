void bad()
{
    twoIntsStruct * data;
    unionType myUnion;
    /* Initialize data */
    data = NULL;
    data = new twoIntsStruct[100];
    /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
    delete [] data;
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete [] data;
    }
}
