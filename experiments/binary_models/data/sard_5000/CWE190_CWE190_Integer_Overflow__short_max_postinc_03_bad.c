void CWE190_Integer_Overflow__short_max_postinc_03_bad()
{
    short data;
    data = 0;
    if(5==5)
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = SHRT_MAX;
    }
    if(5==5)
    {
        {
            /* POTENTIAL FLAW: Incrementing data could cause an overflow */
            data++;
            short result = data;
            printIntLine(result);
        }
    }
}
