void CWE191_Integer_Underflow__int64_t_rand_sub_14_bad()
{
    int64_t data;
    data = 0LL;
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (int64_t)RAND64();
    }
    if(globalFive==5)
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            int64_t result = data - 1;
            printLongLongLine(result);
        }
    }
}
