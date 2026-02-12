void CWE457_Use_of_Uninitialized_Variable__double_18_bad()
{
    double data;
    goto source;
source:
    /* POTENTIAL FLAW: Don't initialize data */
    ; /* empty statement needed for some flow variants */
    goto sink;
sink:
    /* POTENTIAL FLAW: Use data without initializing it */
    printDoubleLine(data);
}
