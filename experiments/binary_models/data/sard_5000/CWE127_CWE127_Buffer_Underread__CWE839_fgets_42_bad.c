void CWE127_Buffer_Underread__CWE839_fgets_42_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    data = badSource(data);
    {
        int buffer[10] = { 0 };
        /* POTENTIAL FLAW: Attempt to access a negative index of the array
         * This check does not check to see if the array index is negative */
        if (data < 10)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is too big.");
        }
    }
}
