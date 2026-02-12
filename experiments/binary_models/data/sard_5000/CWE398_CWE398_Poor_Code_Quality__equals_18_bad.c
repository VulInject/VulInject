void CWE398_Poor_Code_Quality__equals_18_bad()
{
    goto sink;
sink:
    {
        int intOne = 1;
        printIntLine(intOne);
        /* FLAW: the statement has no effect */
        intOne = intOne;
        printIntLine(intOne);
    }
}
