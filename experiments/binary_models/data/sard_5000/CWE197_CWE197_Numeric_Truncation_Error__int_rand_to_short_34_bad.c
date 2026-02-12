void CWE197_Numeric_Truncation_Error__int_rand_to_short_34_bad()
{
    int data;
    CWE197_Numeric_Truncation_Error__int_rand_to_short_34_unionType myUnion;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            /* POTENTIAL FLAW: Convert data to a short, possibly causing a truncation error */
            short shortData = (short)data;
            printShortLine(shortData);
        }
    }
}
