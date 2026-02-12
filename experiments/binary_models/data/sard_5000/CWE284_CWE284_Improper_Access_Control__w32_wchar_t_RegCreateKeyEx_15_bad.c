void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_15_bad()
{
    switch(6)
    {
    case 6:
    {
        wchar_t * keyName = L"TEST\\TestKey";
        HKEY hKey;
        /* FLAW: Call RegCreateKeyExW() with KEY_ALL_ACCESS as the 6th parameter */
        if (RegCreateKeyExW(
                    HKEY_CURRENT_USER,
                    keyName,
                    0,
                    NULL,
                    REG_OPTION_NON_VOLATILE,
                    KEY_ALL_ACCESS,
                    NULL,
                    &hKey,
                    NULL) != ERROR_SUCCESS)
        {
            printLine("Registry key could not be created");
        }
        else
        {
            printLine("Registry key created successfully");
            RegCloseKey(hKey);
        }
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}
