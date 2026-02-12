void CWE190_Integer_Overflow__unsigned_int_rand_postinc_34_bad()
{
    unsigned int data;
    CWE190_Integer_Overflow__unsigned_int_rand_postinc_34_unionType myUnion;
    data = 0;
    /* POTENTIAL FLAW: Use a random value */
    data = (unsigned int)RAND32();
    myUnion.unionFirst = data;
    {
        unsigned int data = myUnion.unionSecond;
        {
            /* POTENTIAL FLAW: Incrementing data could cause an overflow */
            data++;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
