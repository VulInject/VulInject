void CWE398_Poor_Code_Quality__empty_while_06_bad()
{
    if(STATIC_CONST_FIVE==5)
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
}
