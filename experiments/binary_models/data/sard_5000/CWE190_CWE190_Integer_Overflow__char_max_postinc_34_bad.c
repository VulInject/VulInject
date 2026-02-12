void CWE190_Integer_Overflow__char_max_postinc_34_bad()
{
    char data;
    CWE190_Integer_Overflow__char_max_postinc_34_unionType myUnion;
    data = ' ';
    /* POTENTIAL FLAW: Use the maximum size of the data type */
    data = CHAR_MAX;
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        {
            /* POTENTIAL FLAW: Incrementing data could cause an overflow */
            data++;
            char result = data;
            printHexCharLine(result);
        }
    }
}
