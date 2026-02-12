void CWE197_Numeric_Truncation_Error__int_rand_to_short_42_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    data = badSource(data);
    {
        /* POTENTIAL FLAW: Convert data to a short, possibly causing a truncation error */
        short shortData = (short)data;
        printShortLine(shortData);
    }
}
