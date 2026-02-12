void CWE398_Poor_Code_Quality__empty_case_15_bad()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}
