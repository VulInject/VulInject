void CWE190_Integer_Overflow__short_max_postinc_10_bad()
{
    short data;
    data = 0;
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = SHRT_MAX;
    }
    if(globalTrue)
    {
        {
            /* POTENTIAL FLAW: Incrementing data could cause an overflow */
            data++;
            short result = data;
            printIntLine(result);
        }
    }
}
