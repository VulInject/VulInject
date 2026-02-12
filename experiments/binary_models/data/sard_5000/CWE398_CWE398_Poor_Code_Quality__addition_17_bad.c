void CWE398_Poor_Code_Quality__addition_17_bad()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            int intOne = 1, intTwo = 1, intSum = 0;
            printIntLine(intSum);
            /* FLAW: the statement has no effect */
            intOne + intTwo; /* This generates a compiler warning, but we expect it to */
            printIntLine(intSum);
        }
    }
}
