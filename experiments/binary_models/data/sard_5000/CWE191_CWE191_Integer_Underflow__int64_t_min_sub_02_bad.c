void CWE191_Integer_Underflow__int64_t_min_sub_02_bad()
{
    int64_t data;
    data = 0LL;
    if(1)
    {
        /* POTENTIAL FLAW: Use the minimum size of the data type */
        data = LLONG_MIN;
    }
    if(1)
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            int64_t result = data - 1;
            printLongLongLine(result);
        }
    }
}
