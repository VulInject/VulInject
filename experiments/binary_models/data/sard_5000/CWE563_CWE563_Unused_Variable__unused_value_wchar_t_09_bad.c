void CWE563_Unused_Variable__unused_value_wchar_t_09_bad()
{
    wchar_t data;
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Initialize, but do not use data */
        data = L'W';
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Possibly over-write the initial value of data before using it */
        data = L'Z';
        printf("%02lx\n", data);
    }
}
