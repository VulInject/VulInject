void bad()
{
    long * data;
    /* Initialize data */
    data = NULL;
    data = badSource(data);
    /* POTENTIAL FLAW: Possibly deleting memory twice */
    delete data;
}
