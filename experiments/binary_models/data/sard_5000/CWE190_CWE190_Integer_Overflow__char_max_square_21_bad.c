void CWE190_Integer_Overflow__char_max_square_21_bad()
{
    char data;
    data = ' ';
    /* POTENTIAL FLAW: Use the maximum size of the data type */
    data = CHAR_MAX;
    badStatic = 1; /* true */
    badSink(data);
}
