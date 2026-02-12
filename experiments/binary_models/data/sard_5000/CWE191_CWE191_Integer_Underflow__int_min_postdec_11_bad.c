void CWE191_Integer_Underflow__int_min_postdec_11_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Use the minimum value for this type */
        data = INT_MIN;
    }
    if(globalReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            int result = data;
            printIntLine(result);
        }
    }
}
