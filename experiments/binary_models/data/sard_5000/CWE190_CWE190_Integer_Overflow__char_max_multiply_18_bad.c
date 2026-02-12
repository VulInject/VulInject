void CWE190_Integer_Overflow__char_max_multiply_18_bad()
{
    char data;
    data = ' ';
    goto source;
source:
    /* POTENTIAL FLAW: Use the maximum size of the data type */
    data = CHAR_MAX;
    goto sink;
sink:
    if(data > 0) /* ensure we won't have an underflow */
    {
        /* POTENTIAL FLAW: if (data*2) > CHAR_MAX, this will overflow */
        char result = data * 2;
        printHexCharLine(result);
    }
}
