void bad()
{
    {
        char * * pointer = new char *;
        char * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
        delete pointer;
        printLine(data);
    }
}
