void CWE190_Integer_Overflow__unsigned_int_max_postinc_08_bad()
{
    unsigned int data;
    data = 0;
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = UINT_MAX;
    }
    if(staticReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: Incrementing data could cause an overflow */
            data++;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
