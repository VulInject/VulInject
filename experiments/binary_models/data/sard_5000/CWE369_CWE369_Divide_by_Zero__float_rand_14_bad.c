void CWE369_Divide_by_Zero__float_rand_14_bad()
{
    float data;
    /* Initialize data */
    data = 0.0F;
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Use a random number that could possibly equal zero */
        data = (float)RAND32();
    }
    if(globalFive==5)
    {
        {
            /* POTENTIAL FLAW: Possibly divide by zero */
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}
