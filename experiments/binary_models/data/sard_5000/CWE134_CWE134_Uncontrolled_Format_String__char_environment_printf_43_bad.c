void bad()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    badSource(data);
    /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
    printf(data);
}
