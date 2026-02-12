void CWE190_Integer_Overflow__int64_t_rand_square_02_bad()
{
    int64_t data;
    data = 0LL;
    if(1)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (int64_t)RAND64();
    }
    if(1)
    {
        {
            /* POTENTIAL FLAW: if (data*data) > LLONG_MAX, this will overflow */
            int64_t result = data * data;
            printLongLongLine(result);
        }
    }
}
