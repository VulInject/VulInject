void CWE190_Integer_Overflow__char_max_postinc_16_bad()
{
    char data;
    data = ' ';
    while(1)
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = CHAR_MAX;
        break;
    }
    while(1)
    {
        {
            /* POTENTIAL FLAW: Incrementing data could cause an overflow */
            data++;
            char result = data;
            printHexCharLine(result);
        }
        break;
    }
}
