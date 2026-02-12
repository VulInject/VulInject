void CWE190_Integer_Overflow__short_rand_postinc_11_bad()
{
    short data;
    data = 0;
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (short)RAND32();
    }
    if(globalReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: Incrementing data could cause an overflow */
            data++;
            short result = data;
            printIntLine(result);
        }
    }
}
