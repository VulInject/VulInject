void CWE190_Integer_Overflow__unsigned_int_rand_square_34_bad()
{
    unsigned int data;
    CWE190_Integer_Overflow__unsigned_int_rand_square_34_unionType myUnion;
    data = 0;
    /* POTENTIAL FLAW: Use a random value */
    data = (unsigned int)RAND32();
    myUnion.unionFirst = data;
    {
        unsigned int data = myUnion.unionSecond;
        {
            /* POTENTIAL FLAW: if (data*data) > UINT_MAX, this will overflow */
            unsigned int result = data * data;
            printUnsignedLine(result);
        }
    }
}
