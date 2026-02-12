void CWE369_Divide_by_Zero__float_fgets_32_bad()
{
    float data;
    float *dataPtr1 = &data;
    float *dataPtr2 = &data;
    /* Initialize data */
    data = 0.0F;
    {
        float data = *dataPtr1;
        {
            char inputBuffer[CHAR_ARRAY_SIZE];
            /* POTENTIAL FLAW: Use a value input from the console using fgets() */
            if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
            {
                /* Convert to float */
                data = (float)atof(inputBuffer);
            }
            else
            {
                printLine("fgets() failed.");
            }
        }
        *dataPtr1 = data;
    }
    {
        float data = *dataPtr2;
        {
            /* POTENTIAL FLAW: Possibly divide by zero */
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}
