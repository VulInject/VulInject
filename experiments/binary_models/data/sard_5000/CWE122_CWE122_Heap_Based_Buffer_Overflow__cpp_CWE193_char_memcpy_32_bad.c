void bad()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL;
    {
        char * data = *dataPtr1;
        /* FLAW: Did not leave space for a null terminator */
        data = new char[10];
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            char source[10+1] = SRC_STRING;
            /* Copy length + 1 to include NUL terminator from source */
            /* POTENTIAL FLAW: data may not have enough space to hold source */
            memcpy(data, source, (strlen(source) + 1) * sizeof(char));
            printLine(data);
            delete [] data;
        }
    }
}
