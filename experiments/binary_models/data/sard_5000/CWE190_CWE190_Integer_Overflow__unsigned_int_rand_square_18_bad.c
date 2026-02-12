void CWE190_Integer_Overflow__unsigned_int_rand_square_18_bad()
{
    unsigned int data;
    data = 0;
    goto source;
source:
    /* POTENTIAL FLAW: Use a random value */
    data = (unsigned int)RAND32();
    goto sink;
sink:
    {
        /* POTENTIAL FLAW: if (data*data) > UINT_MAX, this will overflow */
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
}
