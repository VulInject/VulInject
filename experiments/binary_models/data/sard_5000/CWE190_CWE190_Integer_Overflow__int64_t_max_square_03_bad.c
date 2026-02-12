void CWE190_Integer_Overflow__int64_t_max_square_03_bad()
{
    int64_t data;
    data = 0LL;
    if(5==5)
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = LLONG_MAX;
    }
    if(5==5)
    {
        {
            /* POTENTIAL FLAW: if (data*data) > LLONG_MAX, this will overflow */
            int64_t result = data * data;
            printLongLongLine(result);
        }
    }
}
