void CWE284_Improper_Access_Control__w32_char_CreateFile_13_bad()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            HANDLE hFile;
            char * fileName = "C:\\temp\\file.txt";
            /* FLAW: Call CreateFileA() with FILE_ALL_ACCESS as the 2nd parameter */
            hFile = CreateFileA(
                        fileName,
                        FILE_ALL_ACCESS,
                        FILE_SHARE_READ,
                        NULL,
                        CREATE_NEW,
                        FILE_ATTRIBUTE_NORMAL,
                        NULL);
            if (hFile == INVALID_HANDLE_VALUE)
            {
                printLine("File could not be created");
            }
            else
            {
                printLine("File created successfully");
                CloseHandle(hFile);
            }
        }
    }
}
