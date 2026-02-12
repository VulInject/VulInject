void CWE191_Integer_Underflow__int64_t_min_predec_07_bad()
{
    int64_t data;
    data = 0LL;
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: Use the minimum size of the data type */
        data = LLONG_MIN;
    }
    if(staticFive==5)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            --data;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
