void CWE191_Integer_Underflow__int64_t_min_postdec_31_bad()
{
    int64_t data;
    data = 0LL;
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = LLONG_MIN;
    {
        int64_t dataCopy = data;
        int64_t data = dataCopy;
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
