void CWE685_Function_Call_With_Incorrect_Number_of_Arguments__basic_01_bad()
{
    {
        char dest[DEST_SIZE];
        /* FLAW: Incorrect number of arguments */
        sprintf(dest, "%s %s", SOURCE_STRING);
        printLine(dest);
    }
}
