void CWE190_Integer_Overflow__unsigned_int_rand_postinc_02_bad()
{
    unsigned int data;
    data = 0;
    if(1)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (unsigned int)RAND32();
    }
    if(1)
    {
        {
            /* POTENTIAL FLAW: Incrementing data could cause an overflow */
            data++;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
