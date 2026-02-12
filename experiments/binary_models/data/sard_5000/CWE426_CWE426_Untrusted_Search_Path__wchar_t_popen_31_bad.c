void CWE426_Untrusted_Search_Path__wchar_t_popen_31_bad()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    /* FLAW: the full path is not specified */
    wcscpy(data, BAD_OS_COMMAND);
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        {
            FILE *pipe;
            /* POTENTIAL FLAW: Executing the wpopen() function without specifying the full path to the executable
             * can allow an attacker to run their own program */
            pipe = POPEN(data, L"wb");
            if (pipe != NULL)
            {
                PCLOSE(pipe);
            }
        }
    }
}
