void CWE391_Unchecked_Error_Condition__strtol_14_bad()
{
    if(globalFive==5)
    {
        {
            long longNumber;
            longNumber = strtol("0xfffffffff", NULL, 0);
            /* FLAW: Do not check to see if strtol() failed */
            printf("%li\n", longNumber);
        }
    }
}
