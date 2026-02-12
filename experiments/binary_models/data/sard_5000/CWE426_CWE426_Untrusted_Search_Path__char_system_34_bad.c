void CWE426_Untrusted_Search_Path__char_system_34_bad()
{
    char * data;
    CWE426_Untrusted_Search_Path__char_system_34_unionType myUnion;
    char dataBuffer[100] = "";
    data = dataBuffer;
    /* FLAW: the full path is not specified */
    strcpy(data, BAD_OS_COMMAND);
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        /* POTENTIAL FLAW: Executing the system() function without specifying the full path to the executable
         * can allow an attacker to run their own program */
        if (SYSTEM(data) <= 0)
        {
            printLine("command execution failed!");
            exit(1);
        }
    }
}
