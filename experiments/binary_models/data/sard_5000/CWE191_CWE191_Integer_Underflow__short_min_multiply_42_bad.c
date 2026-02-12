void CWE191_Integer_Underflow__short_min_multiply_42_bad()
{
    short data;
    data = 0;
    data = badSource(data);
    if(data < 0) /* ensure we won't have an overflow */
    {
        /* POTENTIAL FLAW: if (data * 2) < SHRT_MIN, this will underflow */
        short result = data * 2;
        printIntLine(result);
    }
}
