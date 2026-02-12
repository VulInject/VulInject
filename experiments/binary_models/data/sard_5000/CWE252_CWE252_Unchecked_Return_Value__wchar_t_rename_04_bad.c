void CWE252_Unchecked_Return_Value__wchar_t_rename_04_bad()
{
    if(STATIC_CONST_TRUE)
    {
        /* FLAW: Do not check the return value */
        RENAME(OLD_BAD_FILE_NAME, L"newbadfilename.txt");
    }
}
