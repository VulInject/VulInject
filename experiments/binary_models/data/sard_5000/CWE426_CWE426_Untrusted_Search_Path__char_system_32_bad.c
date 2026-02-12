void CWE426_Untrusted_Search_Path__char_system_32_bad()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        char * data = *dataPtr1;
        /* FLAW: the full path is not specified */
        strcpy(data, BAD_OS_COMMAND);
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        /* POTENTIAL FLAW: Executing the system() function without specifying the full path to the executable
         * can allow an attacker to run their own program */
        if (SYSTEM(data) <= 0)
        {
            printLine("command execution failed!");
            exit(1);
        }
    }
}
