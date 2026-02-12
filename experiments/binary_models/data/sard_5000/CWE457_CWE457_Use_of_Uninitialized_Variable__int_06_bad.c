void CWE457_Use_of_Uninitialized_Variable__int_06_bad()
{
    int data;
    if(STATIC_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Don't initialize data */
        ; /* empty statement needed for some flow variants */
    }
    if(STATIC_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Use data without initializing it */
        printIntLine(data);
    }
}
