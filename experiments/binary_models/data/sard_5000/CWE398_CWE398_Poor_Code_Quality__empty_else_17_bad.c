void CWE398_Poor_Code_Quality__empty_else_17_bad()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        /* FLAW: An empty else statement has no effect */
        {
            int x;
            x = (rand() % 3);
            if (x == 0)
            {
                printLine("Inside the else statement");
            }
            else
            {
            }
        }
        printLine("Hello from bad()");
    }
}
