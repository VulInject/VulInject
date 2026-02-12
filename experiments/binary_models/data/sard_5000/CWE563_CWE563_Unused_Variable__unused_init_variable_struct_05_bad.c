void CWE563_Unused_Variable__unused_init_variable_struct_05_bad()
{
    twoIntsStruct data;
    /* POTENTIAL FLAW: Initialize, but do not use data */
    data.intOne = 0;
    data.intTwo = 0;
    if(staticTrue)
    {
        /* FLAW: Do not use the variable */
        /* do nothing */
        ; /* empty statement needed for some flow variants */
    }
}
