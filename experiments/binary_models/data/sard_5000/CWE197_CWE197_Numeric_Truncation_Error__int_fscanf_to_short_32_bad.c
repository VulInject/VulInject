void CWE197_Numeric_Truncation_Error__int_fscanf_to_short_32_bad()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    /* Initialize data */
    data = -1;
    {
        int data = *dataPtr1;
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
        {
            /* POTENTIAL FLAW: Convert data to a short, possibly causing a truncation error */
            short shortData = (short)data;
            printShortLine(shortData);
        }
    }
}
