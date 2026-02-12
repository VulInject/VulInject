void CWE191_Integer_Underflow__unsigned_int_rand_sub_10_bad()
{
    unsigned int data;
    data = 0;
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (unsigned int)RAND32();
    }
    if(globalTrue)
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            unsigned int result = data - 1;
            printUnsignedLine(result);
        }
    }
}
