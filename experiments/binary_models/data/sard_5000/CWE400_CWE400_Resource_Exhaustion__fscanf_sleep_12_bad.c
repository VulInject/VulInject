void CWE400_Resource_Exhaustion__fscanf_sleep_12_bad()
{
    int count;
    /* Initialize count */
    count = -1;
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: Read count from the console using fscanf() */
        fscanf(stdin, "%d", &count);
    }
    else
    {
        /* FIX: Use a relatively small number */
        count = 20;
    }
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
    else
    {
        /* FIX: Validate count before using it as a parameter in the sleep function */
        if (count > 0 && count <= 2000)
        {
            SLEEP(count);
            printLine("Sleep time OK");
        }
        else
        {
            printLine("Sleep time too long");
        }
    }
}
