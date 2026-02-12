void CWE563_Unused_Variable__unused_value_int64_t_17_bad()
{
    int i,j;
    int64_t data;
    for(i = 0; i < 1; i++)
    {
        /* POTENTIAL FLAW: Initialize, but do not use data */
        data = 5LL;
    }
    for(j = 0; j < 1; j++)
    {
        /* POTENTIAL FLAW: Possibly over-write the initial value of data before using it */
        data = 10LL;
        printLongLongLine(data);
    }
}
