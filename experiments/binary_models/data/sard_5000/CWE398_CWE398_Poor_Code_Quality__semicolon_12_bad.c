void CWE398_Poor_Code_Quality__semicolon_12_bad()
{
    if(globalReturnsTrueOrFalse())
    {
        /* FLAW: the statement has no effect */
        ;
        printLine("Hello from bad()");
    }
    else
    {
        /* FIX: Do not include a statement that has no effect */
        printLine("Hello from good()");
    }
}
