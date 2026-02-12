void CWE785_Path_Manipulation_Function_Without_Max_Sized_Buffer__w32_15_bad()
{
    switch(6)
    {
    case 6:
    {
        char path[BAD_PATH_SIZE];
        DWORD length;
        length = GetCurrentDirectoryA(BAD_PATH_SIZE, path);
        if (length == 0 || length >= BAD_PATH_SIZE) /* failure conditions for this API call */
        {
            exit(1);
        }
        /* FLAW: PathAppend assumes the 'path' parameter is MAX_PATH */
        /* INCIDENTAL: CWE 121 stack based buffer overflow, which is intrinsic to
         * this example identified on the CWE webpage */
        if (!PathAppendA(path, "AAAAAAAAAAAA"))
        {
            exit(1);
        }
        printSizeTLine(strlen(path));
        printIntLine(BAD_PATH_SIZE);
        printLine(path);
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}
