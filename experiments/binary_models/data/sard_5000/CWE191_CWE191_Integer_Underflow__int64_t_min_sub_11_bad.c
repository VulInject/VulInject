void CWE191_Integer_Underflow__int64_t_min_sub_11_bad()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Use the minimum size of the data type */
        data = LLONG_MIN;
    }
    if(globalReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            int64_t result = data - 1;
            printLongLongLine(result);
        }
    }
}
