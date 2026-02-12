void CWE190_Integer_Overflow__unsigned_int_max_preinc_42_bad()
{
    unsigned int data;
    data = 0;
    data = badSource(data);
    {
        /* POTENTIAL FLAW: Incrementing data could cause an overflow */
        ++data;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
