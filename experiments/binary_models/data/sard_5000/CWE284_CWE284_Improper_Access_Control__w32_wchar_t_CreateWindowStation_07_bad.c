void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_07_bad()
{
    if(staticFive==5)
    {
        {
            HWINSTA hWinStation;
            wchar_t * wStationName = L"WindowsStationExample";
            /* FLAW: Call CreateWindowStationW() with GENERIC_ALL as the 3rd parameter */
            hWinStation = CreateWindowStationW(
                              wStationName,
                              0,
                              GENERIC_ALL,
                              NULL);
            if (hWinStation == NULL)
            {
                printLine("Windows station could not be created");
            }
            else
            {
                printLine("Windows Station created successfully");
                CloseWindowStation(hWinStation);
            }
        }
    }
}
