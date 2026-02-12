void CWE398_Poor_Code_Quality__empty_if_17_bad()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        /* FLAW: An empty if statement has no effect */
        {
            int x;
            x = (rand() % 3);
            if (x == 0)
            {
            }
            else
            {
                printLine("Inside the else statement");
            }
        }
        printLine("Hello from bad()");
    }
}
