void CWE190_Integer_Overflow__unsigned_int_rand_multiply_05_bad()
{
    unsigned int data;
    data = 0;
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (unsigned int)RAND32();
    }
    if(staticTrue)
    {
        if(data > 0) /* ensure we won't have an underflow */
        {
            /* POTENTIAL FLAW: if (data*2) > UINT_MAX, this will overflow */
            unsigned int result = data * 2;
            printUnsignedLine(result);
        }
    }
}
