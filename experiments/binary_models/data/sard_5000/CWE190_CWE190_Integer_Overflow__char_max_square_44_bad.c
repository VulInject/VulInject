void CWE190_Integer_Overflow__char_max_square_44_bad()
{
    char data;
    /* define a function pointer */
    void (*funcPtr) (char) = badSink;
    data = ' ';
    /* POTENTIAL FLAW: Use the maximum size of the data type */
    data = CHAR_MAX;
    /* use the function pointer */
    funcPtr(data);
}
