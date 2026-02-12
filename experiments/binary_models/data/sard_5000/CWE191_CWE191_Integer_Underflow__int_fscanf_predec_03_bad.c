void CWE191_Integer_Underflow__int_fscanf_predec_03_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(5==5)
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);
    }
    if(5==5)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            --data;
            int result = data;
            printIntLine(result);
        }
    }
}
