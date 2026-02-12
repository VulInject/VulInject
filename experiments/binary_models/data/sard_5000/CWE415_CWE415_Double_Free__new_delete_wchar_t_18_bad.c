void bad()
{
    wchar_t * data;
    /* Initialize data */
    data = NULL;
    goto source;
source:
    data = new wchar_t;
    /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
    delete data;
    goto sink;
sink:
    /* POTENTIAL FLAW: Possibly deleting memory twice */
    delete data;
}
