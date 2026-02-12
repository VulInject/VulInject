void CWE197_Numeric_Truncation_Error__short_fscanf_07_bad()
{
    short data;
    /* Initialize data */
    data = -1;
    if(staticFive==5)
    {
        /* FLAW: Use a number input from the console using fscanf() */
        fscanf (stdin, "%hd", &data);
    }
    {
        /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
