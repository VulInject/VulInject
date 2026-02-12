void CWE369_Divide_by_Zero__float_rand_02_bad()
{
    float data;
    /* Initialize data */
    data = 0.0F;
    if(1)
    {
        /* POTENTIAL FLAW: Use a random number that could possibly equal zero */
        data = (float)RAND32();
    }
    if(1)
    {
        {
            /* POTENTIAL FLAW: Possibly divide by zero */
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}
