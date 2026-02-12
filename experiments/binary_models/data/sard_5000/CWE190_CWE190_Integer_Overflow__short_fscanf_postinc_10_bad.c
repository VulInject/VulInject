void CWE190_Integer_Overflow__short_fscanf_postinc_10_bad()
{
    short data;
    data = 0;
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%hd", &data);
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
