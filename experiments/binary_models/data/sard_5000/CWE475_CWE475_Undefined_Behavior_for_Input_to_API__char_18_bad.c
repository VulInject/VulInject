void CWE475_Undefined_Behavior_for_Input_to_API__char_18_bad()
{
    goto sink;
sink:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
        strcpy(data, "abcdefghijklmnopqrstuvwxyz");
        /* FLAW: Copy overlapping memory regions using memcpy() for which the result is undefined */
        memcpy(data + 6, data + 4, 10*sizeof(char));
        printLine(data);
    }
}
