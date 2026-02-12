void CWE190_Integer_Overflow__int64_t_max_postinc_11_bad()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = LLONG_MAX;
    }
    if(globalReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: Incrementing data could cause an overflow */
            data++;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
