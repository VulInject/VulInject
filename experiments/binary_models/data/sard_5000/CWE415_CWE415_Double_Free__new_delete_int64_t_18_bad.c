void bad()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    goto source;
source:
    data = new int64_t;
    /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
    delete data;
    goto sink;
sink:
    /* POTENTIAL FLAW: Possibly deleting memory twice */
    delete data;
}
