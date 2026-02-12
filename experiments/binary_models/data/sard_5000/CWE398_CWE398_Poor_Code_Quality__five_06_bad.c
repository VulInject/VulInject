void CWE398_Poor_Code_Quality__five_06_bad()
{
    if(STATIC_CONST_FIVE==5)
    {
        /* FLAW: the statement has no effect */
        5;
        printLine("Hello from bad()");
    }
}
