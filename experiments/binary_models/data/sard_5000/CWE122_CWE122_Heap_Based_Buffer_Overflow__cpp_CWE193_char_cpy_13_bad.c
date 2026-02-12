void bad()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* FLAW: Did not leave space for a null terminator */
        data = new char[10];
    }
    {
        char source[10+1] = SRC_STRING;
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        strcpy(data, source);
        printLine(data);
        delete [] data;
    }
}
