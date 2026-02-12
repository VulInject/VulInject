void CWE197_Numeric_Truncation_Error__short_large_17_bad()
{
    int i;
    short data;
    /* Initialize data */
    data = -1;
    for(i = 0; i < 1; i++)
    {
        /* FLAW: Use a number larger than CHAR_MAX */
        data = CHAR_MAX + 1;
    }
    {
        /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
