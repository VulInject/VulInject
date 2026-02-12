void bad()
{
    char * data;
    unionType myUnion;
    /* Initialize data */
    data = NULL;
    data = new char;
    /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
    delete data;
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete data;
    }
}
