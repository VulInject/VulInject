void CWE563_Unused_Variable__unused_value_wchar_t_18_bad()
{
    wchar_t data;
    goto source;
source:
    /* POTENTIAL FLAW: Initialize, but do not use data */
    data = L'W';
    goto sink;
sink:
    /* POTENTIAL FLAW: Possibly over-write the initial value of data before using it */
    data = L'Z';
    printf("%02lx\n", data);
}
