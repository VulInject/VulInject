void CWE390_Error_Without_Action__fgets_char_18_bad()
{
    goto sink;
sink:
    {
        /* By initializing dataBuffer, we ensure this will not be the
         * CWE 690 (Unchecked Return Value To NULL Pointer) flaw for fgets() */
        char dataBuffer[100] = "";
        char * data = dataBuffer;
        printLine("Please enter a string: ");
        /* FLAW: check the return value, but do nothing if there is an error */
        if (fgets(data, 100, stdin) == NULL)
        {
            /* do nothing */
        }
        printLine(data);
    }
}
