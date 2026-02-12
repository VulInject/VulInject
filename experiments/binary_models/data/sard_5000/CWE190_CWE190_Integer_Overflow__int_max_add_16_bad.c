void CWE190_Integer_Overflow__int_max_add_16_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    while(1)
    {
        /* POTENTIAL FLAW: Use the maximum value for this type */
        data = INT_MAX;
        break;
    }
    while(1)
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            int result = data + 1;
            printIntLine(result);
        }
        break;
    }
}
