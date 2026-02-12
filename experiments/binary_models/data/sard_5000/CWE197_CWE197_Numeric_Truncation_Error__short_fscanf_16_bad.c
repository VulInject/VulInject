void CWE197_Numeric_Truncation_Error__short_fscanf_16_bad()
{
    short data;
    /* Initialize data */
    data = -1;
    while(1)
    {
        /* FLAW: Use a number input from the console using fscanf() */
        fscanf (stdin, "%hd", &data);
        break;
    }
    {
        /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
