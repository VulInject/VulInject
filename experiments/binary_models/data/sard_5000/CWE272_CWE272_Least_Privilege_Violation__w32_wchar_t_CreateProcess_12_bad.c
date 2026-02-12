void CWE272_Least_Privilege_Violation__w32_wchar_t_CreateProcess_12_bad()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            STARTUPINFOW si;
            PROCESS_INFORMATION pi;
            /* FLAW: The commandLine parameter to CreateProcess() contains a space in it and does not
               surround the executable path with quotes.  A malicious executable could be run because
               of the way the function parses spaces. The process will attempt to run "Program.exe,"
               if it exists, instead of the intended "GoodApp.exe" */
            if( !CreateProcessW(NULL,
                                L"C:\\Program Files\\GoodApp arg1 arg2",
                                NULL,
                                NULL,
                                FALSE,
                                0,
                                NULL,
                                NULL,
                                &si,
                                &pi))
            {
                printLine("CreateProcess failed");
                return;
            }
            else
            {
                printLine("CreateProcess successful");
            }
            /* Wait until child process exits. */
            WaitForSingleObject(pi.hProcess, INFINITE);
            /* Close process and thread handles.*/
            CloseHandle(pi.hProcess);
            CloseHandle(pi.hThread);
        }
    }
    else
    {
        {
            STARTUPINFOW si;
            PROCESS_INFORMATION pi;
            /* FIX: The commandLine parameter to CreateProcess() contains quotes surrounding the
               executable path. */
            if( !CreateProcessW(NULL,
                                L"\"C:\\Program Files\\GoodApp\" arg1 arg2",
                                NULL,
                                NULL,
                                FALSE,
                                0,
                                NULL,
                                NULL,
                                &si,
                                &pi))
            {
                printf( "CreateProcess failed (%d).\n", GetLastError() );
                return;
            }
            else
            {
                printLine("CreateProcess successful");
            }
            /* Wait until child process exits. */
            WaitForSingleObject(pi.hProcess, INFINITE);
            /* Close process and thread handles.*/
            CloseHandle(pi.hProcess);
            CloseHandle(pi.hThread);
        }
    }
}
