void CWE479_Signal_Handler_Use_of_Non_Reentrant_Function__basic_08_bad()
{
    if(staticReturnsTrue())
    {
        signal(SIGINT, helperBad);
    }
}
