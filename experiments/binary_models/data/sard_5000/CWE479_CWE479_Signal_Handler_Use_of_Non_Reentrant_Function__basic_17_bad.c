void CWE479_Signal_Handler_Use_of_Non_Reentrant_Function__basic_17_bad()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        signal(SIGINT, helperBad);
    }
}
