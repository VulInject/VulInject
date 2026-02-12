void CWE563_Unused_Variable__unused_value_long_13_bad()
{
    long data;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Initialize, but do not use data */
        data = 5L;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Possibly over-write the initial value of data before using it */
        data = 10L;
        printLongLine(data);
    }
}
