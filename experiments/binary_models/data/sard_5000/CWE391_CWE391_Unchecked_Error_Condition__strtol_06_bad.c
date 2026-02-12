void CWE391_Unchecked_Error_Condition__strtol_06_bad()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            long longNumber;
            longNumber = strtol("0xfffffffff", NULL, 0);
            /* FLAW: Do not check to see if strtol() failed */
            printf("%li\n", longNumber);
        }
    }
}
