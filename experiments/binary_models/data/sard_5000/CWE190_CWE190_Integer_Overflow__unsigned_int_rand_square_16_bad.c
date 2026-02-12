void CWE190_Integer_Overflow__unsigned_int_rand_square_16_bad()
{
    unsigned int data;
    data = 0;
    while(1)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (unsigned int)RAND32();
        break;
    }
    while(1)
    {
        {
            /* POTENTIAL FLAW: if (data*data) > UINT_MAX, this will overflow */
            unsigned int result = data * data;
            printUnsignedLine(result);
        }
        break;
    }
}
