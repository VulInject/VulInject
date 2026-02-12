void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_10_bad()
{
    if(globalTrue)
    {
        {
            HWINSTA hWinStation;
            char * wStationName = "WindowsStationExample";
            /* FLAW: Call CreateWindowStationA() with GENERIC_ALL as the 3rd parameter */
            hWinStation = CreateWindowStationA(
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
