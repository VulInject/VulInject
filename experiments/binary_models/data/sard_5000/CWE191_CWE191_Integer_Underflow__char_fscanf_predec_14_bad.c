void CWE191_Integer_Underflow__char_fscanf_predec_14_bad()
{
    char data;
    data = ' ';
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%c", &data);
    }
    if(globalFive==5)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            --data;
            char result = data;
            printHexCharLine(result);
        }
    }
}
