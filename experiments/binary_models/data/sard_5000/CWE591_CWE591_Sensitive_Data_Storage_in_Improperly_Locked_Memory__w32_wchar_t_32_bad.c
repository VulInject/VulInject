void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_32_bad()
{
    wchar_t * password;
    wchar_t * *passwordPtr1 = &password;
    wchar_t * *passwordPtr2 = &password;
    /* Initialize Data */
    password = L"";
    {
        wchar_t * password = *passwordPtr1;
        password = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (password == NULL)
        {
            printLine("Memory could not be allocated");
            exit(1);
        }
        /* FLAW: Do not lock the memory */
        /* INCIDENTAL FLAW: CWE-259 Hardcoded Password */
        wcscpy(password, L"Password1234!");
        *passwordPtr1 = password;
    }
    {
        wchar_t * password = *passwordPtr2;
        {
            HANDLE pHandle;
            wchar_t * username = L"User";
            wchar_t * domain = L"Domain";
            /* Use the password in LogonUser() to establish that it is "sensitive" */
            if (LogonUserW(
                        username,
                        domain,
                        password,
                        LOGON32_LOGON_NETWORK,
                        LOGON32_PROVIDER_DEFAULT,
                        &pHandle) != 0)
            {
                printLine("User logged in successfully.");
                CloseHandle(pHandle);
            }
            else
            {
                printLine("Unable to login.");
            }
            /* POTENTIAL FLAW: Sensitive data possibly improperly locked */
            free(password);
        }
    }
}
