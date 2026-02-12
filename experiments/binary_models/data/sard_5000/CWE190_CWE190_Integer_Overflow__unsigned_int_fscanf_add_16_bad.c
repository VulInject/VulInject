void CWE190_Integer_Overflow__unsigned_int_fscanf_add_16_bad()
{
    unsigned int data;
    data = 0;
    while(1)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%u", &data);
        break;
    }
    while(1)
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            unsigned int result = data + 1;
            printUnsignedLine(result);
        }
        break;
    }
}
