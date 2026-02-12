void CWE191_Integer_Underflow__short_min_multiply_32_bad()
{
    short data;
    short *dataPtr1 = &data;
    short *dataPtr2 = &data;
    data = 0;
    {
        short data = *dataPtr1;
        /* POTENTIAL FLAW: Use the minimum size of the data type */
        data = SHRT_MIN;
        *dataPtr1 = data;
    }
    {
        short data = *dataPtr2;
        if(data < 0) /* ensure we won't have an overflow */
        {
            /* POTENTIAL FLAW: if (data * 2) < SHRT_MIN, this will underflow */
            short result = data * 2;
            printIntLine(result);
        }
    }
}
