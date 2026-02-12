void CWE284_Improper_Access_Control__w32_char_CreateFile_15_bad()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}
