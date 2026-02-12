void bad()
{
    char * data;
    data = NULL;
    /* FLAW: Did not leave space for a null terminator */
    data = new char[10];
    badData = data;
    badSink();
}
