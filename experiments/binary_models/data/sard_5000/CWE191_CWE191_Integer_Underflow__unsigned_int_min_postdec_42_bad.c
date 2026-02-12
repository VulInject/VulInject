void CWE191_Integer_Underflow__unsigned_int_min_postdec_42_bad()
{
    unsigned int data;
    data = 0;
    data = badSource(data);
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
