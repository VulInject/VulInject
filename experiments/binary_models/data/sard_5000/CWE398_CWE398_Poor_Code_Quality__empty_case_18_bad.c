void CWE398_Poor_Code_Quality__empty_case_18_bad()
{
    goto sink;
sink:
    /* FLAW: An empty case statement has no effect */
    {
        int x = (rand() % 3);
        switch (x)
        {
        case 0:
            break;
        }
    }
    printLine("Hello from bad()");
}
