void CWE398_Poor_Code_Quality__empty_while_09_bad()
{
    if(GLOBAL_CONST_TRUE)
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
