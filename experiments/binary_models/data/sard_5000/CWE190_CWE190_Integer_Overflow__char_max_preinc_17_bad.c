void CWE190_Integer_Overflow__char_max_preinc_17_bad()
{
    int i,j;
    char data;
    data = ' ';
    for(i = 0; i < 1; i++)
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = CHAR_MAX;
    }
    for(j = 0; j < 1; j++)
    {
        {
            /* POTENTIAL FLAW: Incrementing data could cause an overflow */
            ++data;
            char result = data;
            printHexCharLine(result);
        }
    }
}
