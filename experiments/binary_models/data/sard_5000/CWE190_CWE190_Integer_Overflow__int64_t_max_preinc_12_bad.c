void CWE190_Integer_Overflow__int64_t_max_preinc_12_bad()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = LLONG_MAX;
    }
    else
    {
        /* FIX: Use a small, non-zero value that will not cause an overflow in the sinks */
        data = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            /* POTENTIAL FLAW: Incrementing data could cause an overflow */
            ++data;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
    else
    {
        /* FIX: Add a check to prevent an overflow from occurring */
        if (data < LLONG_MAX)
        {
            ++data;
            int64_t result = data;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
