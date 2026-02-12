void CWE272_Least_Privilege_Violation__w32_char_RegCreateKey_17_bad()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            char * keyName = "TEST\\TestKey";
            HKEY hKey;
            /* FLAW: Call RegCreateKeyA() with HKEY_LOCAL_MACHINE violating the least privilege principal */
            if (RegCreateKeyA(
                        HKEY_LOCAL_MACHINE,
                        keyName,
                        &hKey) != ERROR_SUCCESS)
            {
                printLine("Registry key could not be created");
            }
            else
            {
                printLine("Registry key created successfully");
                RegCloseKey(hKey);
            }
        }
    }
}
