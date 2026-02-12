void CWE426_Untrusted_Search_Path__wchar_t_system_03_bad()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(5==5)
    {
        /* FLAW: the full path is not specified */
        wcscpy(data, BAD_OS_COMMAND);
    }
    /* POTENTIAL FLAW: Executing the _wsystem() function without specifying the full path to the executable
     * can allow an attacker to run their own program */
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
