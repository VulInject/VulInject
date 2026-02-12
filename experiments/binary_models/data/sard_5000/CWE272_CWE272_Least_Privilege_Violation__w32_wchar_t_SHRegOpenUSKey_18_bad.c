void CWE272_Least_Privilege_Violation__w32_wchar_t_SHRegOpenUSKey_18_bad()
{
    goto sink;
sink:
    {
        wchar_t * keyName = L"TEST\\TestKey";
        HUSKEY hKey;
        /* FLAW: Call SHRegOpenUSKeyW() with HKEY_LOCAL_MACHINE (fIgnoreHKCU == TRUE) violating the least privilege principal */
        if (SHRegOpenUSKeyW(
                    keyName,
                    KEY_WRITE,
                    NULL,
                    &hKey,
                    TRUE) != ERROR_SUCCESS)
        {
            printLine("Registry key could not be opened");
        }
        else
        {
            printLine("Registry key opened successfully");
            SHRegCloseUSKey(hKey);
        }
    }
}
