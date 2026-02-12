void CWE398_Poor_Code_Quality__equals_16_bad()
{
    while(1)
    {
        {
            int intOne = 1;
            printIntLine(intOne);
            /* FLAW: the statement has no effect */
            intOne = intOne;
            printIntLine(intOne);
        }
        break;
    }
}
