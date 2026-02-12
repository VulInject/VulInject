void CWE398_Poor_Code_Quality__empty_while_12_bad()
{
    if(globalReturnsTrueOrFalse())
    {
        /* FLAW: An empty while statement has no effect */
        {
            int i = 0;
            while(i++ < 10)
            {
            }
        }
        printLine("Hello from bad()");
    }
    else
    {
        /* FIX: Do not include an empty while statement */
        {
            int i = 0;
            while(i++ < 10)
            {
                printLine("Inside the while statement");
            }
        }
        printLine("Hello from good()");
    }
}
