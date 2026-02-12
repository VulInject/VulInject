void CWE398_Poor_Code_Quality__semicolon_15_bad()
{
    switch(6)
    {
    case 6:
        /* FLAW: the statement has no effect */
        ;
        printLine("Hello from bad()");
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}
