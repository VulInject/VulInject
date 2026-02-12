void CWE190_Integer_Overflow__short_max_add_07_bad()
{
    short data;
    data = 0;
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = SHRT_MAX;
    }
    if(staticFive==5)
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            short result = data + 1;
            printIntLine(result);
        }
    }
}
