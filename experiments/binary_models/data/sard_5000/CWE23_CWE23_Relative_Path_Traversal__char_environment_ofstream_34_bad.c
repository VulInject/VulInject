void bad()
{
    char * data;
    unionType myUnion;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    {
        /* Append input from an environment variable to data */
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        /* If there is data in the environment variable */
        if (environment != NULL)
        {
            /* POTENTIAL FLAW: Read data from an environment variable */
            strncat(data+dataLen, environment, FILENAME_MAX-dataLen-1);
        }
    }
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            ofstream outputFile;
            /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
            outputFile.open((char *)data);
            outputFile.close();
        }
    }
}
