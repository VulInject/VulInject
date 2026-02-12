void CWE191_Integer_Underflow__unsigned_int_min_sub_07_bad()
{
    unsigned int data;
    data = 0;
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: Use the minimum size of the data type */
        data = 0;
    }
    if(staticFive==5)
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            unsigned int result = data - 1;
            printUnsignedLine(result);
        }
    }
}
