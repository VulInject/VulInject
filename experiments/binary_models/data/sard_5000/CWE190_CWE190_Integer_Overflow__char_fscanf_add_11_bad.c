void CWE190_Integer_Overflow__char_fscanf_add_11_bad()
{
    char data;
    data = ' ';
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%c", &data);
    }
    if(globalReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            char result = data + 1;
            printHexCharLine(result);
        }
    }
}
