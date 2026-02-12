void CWE190_Integer_Overflow__int_max_add_10_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Use the maximum value for this type */
        data = INT_MAX;
    }
    if(globalTrue)
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            int result = data + 1;
            printIntLine(result);
        }
    }
}
