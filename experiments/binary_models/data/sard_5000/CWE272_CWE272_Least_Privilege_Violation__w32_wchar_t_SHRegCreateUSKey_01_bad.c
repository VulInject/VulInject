void CWE272_Least_Privilege_Violation__w32_wchar_t_SHRegCreateUSKey_01_bad()
{
    {
        wchar_t * keyName = L"TEST\\TestKey";
        HUSKEY hKey;
        /* FLAW: Call SHRegCreateUSKeyW() with SHREGSET_HKLM violating the least privilege principal */
        if (SHRegCreateUSKeyW(
                    keyName,
                    KEY_WRITE,
                    NULL,
                    &hKey,
                    SHREGSET_HKLM) != ERROR_SUCCESS)
        {
            printLine("Registry key could not be created");
        }
        else
        {
            printLine("Registry key created successfully");
            SHRegCloseUSKey(hKey);
        }
    }
}
