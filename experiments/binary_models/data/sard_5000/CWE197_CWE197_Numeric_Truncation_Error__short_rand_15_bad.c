void CWE197_Numeric_Truncation_Error__short_rand_15_bad()
{
    short data;
    /* Initialize data */
    data = -1;
    switch(6)
    {
    case 6:
        /* FLAW: Use a random number */
        data = (short)RAND32();
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
    {
        /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
