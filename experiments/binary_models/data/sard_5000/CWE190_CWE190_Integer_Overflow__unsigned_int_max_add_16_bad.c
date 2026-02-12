void CWE190_Integer_Overflow__unsigned_int_max_add_16_bad()
{
    unsigned int data;
    data = 0;
    while(1)
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = UINT_MAX;
        break;
    }
    while(1)
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            unsigned int result = data + 1;
            printUnsignedLine(result);
        }
        break;
    }
}
