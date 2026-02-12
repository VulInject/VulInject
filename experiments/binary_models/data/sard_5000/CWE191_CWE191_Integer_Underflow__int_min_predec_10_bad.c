void CWE191_Integer_Underflow__int_min_predec_10_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Use the minimum value for this type */
        data = INT_MIN;
    }
    if(globalTrue)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            --data;
            int result = data;
            printIntLine(result);
        }
    }
}
