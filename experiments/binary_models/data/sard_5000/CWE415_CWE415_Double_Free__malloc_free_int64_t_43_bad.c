void bad()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    badSource(data);
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}
