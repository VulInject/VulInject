void CWE191_Integer_Underflow__char_min_predec_14_bad()
{
    char data;
    data = ' ';
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Use the minimum size of the data type */
        data = CHAR_MIN;
    }
    if(globalFive==5)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            --data;
            char result = data;
            printHexCharLine(result);
        }
    }
}
