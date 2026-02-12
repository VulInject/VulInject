void CWE191_Integer_Underflow__int_min_predec_06_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(STATIC_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Use the minimum value for this type */
        data = INT_MIN;
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            --data;
            int result = data;
            printIntLine(result);
        }
    }
}
