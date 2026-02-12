void CWE191_Integer_Underflow__int_min_sub_03_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(5==5)
    {
        /* POTENTIAL FLAW: Use the minimum value for this type */
        data = INT_MIN;
    }
    if(5==5)
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            int result = data - 1;
            printIntLine(result);
        }
    }
}
