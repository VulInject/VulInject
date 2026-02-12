void CWE252_Unchecked_Return_Value__char_rename_14_bad()
{
    if(globalFive==5)
    {
        /* FLAW: Do not check the return value */
        RENAME(OLD_BAD_FILE_NAME, "newbadfilename.txt");
    }
}
