void CWE398_Poor_Code_Quality__empty_if_03_bad()
{
    if(5==5)
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
