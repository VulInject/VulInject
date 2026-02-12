void CWE190_Integer_Overflow__int64_t_rand_preinc_08_bad()
{
    int64_t data;
    data = 0LL;
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (int64_t)RAND64();
    }
    if(staticReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: Incrementing data could cause an overflow */
            ++data;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
