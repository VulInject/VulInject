void CWE190_Integer_Overflow__char_fscanf_postinc_42_bad()
{
    char data;
    data = ' ';
    data = badSource(data);
    {
        /* POTENTIAL FLAW: Incrementing data could cause an overflow */
        data++;
        char result = data;
        printHexCharLine(result);
    }
}
