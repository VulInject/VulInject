void CWE190_Integer_Overflow__unsigned_int_fscanf_add_18_bad()
{
    unsigned int data;
    data = 0;
    goto source;
source:
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%u", &data);
    goto sink;
sink:
    {
        /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
        unsigned int result = data + 1;
        printUnsignedLine(result);
    }
}
