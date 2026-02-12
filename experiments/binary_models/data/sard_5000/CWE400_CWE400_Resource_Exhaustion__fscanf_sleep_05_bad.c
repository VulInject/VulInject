void CWE400_Resource_Exhaustion__fscanf_sleep_05_bad()
{
    int count;
    /* Initialize count */
    count = -1;
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Read count from the console using fscanf() */
        fscanf(stdin, "%d", &count);
    }
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
