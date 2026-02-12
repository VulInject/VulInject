void CWE197_Numeric_Truncation_Error__int_large_to_short_03_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    if(5==5)
    {
        /* FLAW: Use a number larger than SHRT_MAX */
        data = SHRT_MAX + 5;
    }
    {
        /* POTENTIAL FLAW: Convert data to a short, possibly causing a truncation error */
        short shortData = (short)data;
        printShortLine(shortData);
    }
}
