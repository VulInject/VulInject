void CWE563_Unused_Variable__unused_uninit_variable_int64_t_06_bad()
{
    int64_t data;
    /* POTENTIAL FLAW: Do not initialize or use data */
    ; /* empty statement needed for some flow variants */
    if(STATIC_CONST_FIVE==5)
    {
        /* FLAW: Do not use the variable */
        /* do nothing */
        ; /* empty statement needed for some flow variants */
    }
}
