void CWE191_Integer_Underflow__int64_t_rand_predec_16_bad()
{
    int64_t data;
    data = 0LL;
    while(1)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (int64_t)RAND64();
        break;
    }
    while(1)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            --data;
            int64_t result = data;
            printLongLongLine(result);
        }
        break;
    }
}
