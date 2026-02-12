void CWE398_Poor_Code_Quality__empty_for_18_bad()
{
    goto sink;
sink:
    /* FLAW: An empty for statement has no effect */
    {
        int i;
        for (i = 0; i < 10; i++)
        {
        }
    }
    printLine("Hello from bad()");
}
