void CWE190_Integer_Overflow__char_max_square_08_bad()
{
    char data;
    data = ' ';
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = CHAR_MAX;
    }
    if(staticReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
            char result = data * data;
            printHexCharLine(result);
        }
    }
}
