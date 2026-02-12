void CWE398_Poor_Code_Quality__semicolon_17_bad()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        /* FLAW: the statement has no effect */
        ;
        printLine("Hello from bad()");
    }
}
