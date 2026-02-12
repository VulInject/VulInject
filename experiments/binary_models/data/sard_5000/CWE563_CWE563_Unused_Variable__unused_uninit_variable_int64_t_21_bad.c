void CWE563_Unused_Variable__unused_uninit_variable_int64_t_21_bad()
{
    int64_t data;
    /* POTENTIAL FLAW: Do not initialize or use data */
    ; /* empty statement needed for some flow variants */
    badStatic = 1; /* true */
    badSink(data);
}
