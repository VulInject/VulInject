void CWE398_Poor_Code_Quality__equals_14_bad()
{
    if(globalFive==5)
    {
        {
            int intOne = 1;
            printIntLine(intOne);
            /* FLAW: the statement has no effect */
            intOne = intOne;
            printIntLine(intOne);
        }
    }
}
