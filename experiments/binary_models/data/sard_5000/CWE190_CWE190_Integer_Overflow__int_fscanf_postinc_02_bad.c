void CWE190_Integer_Overflow__int_fscanf_postinc_02_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(1)
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);
    }
    if(1)
    {
        {
            /* POTENTIAL FLAW: Incrementing data could cause an overflow */
            data++;
            int result = data;
            printIntLine(result);
        }
    }
}
