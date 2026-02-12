void bad()
{
    goto sink;
sink:
    {
        char * pointer = new char;
        char data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
        delete pointer;
        printHexCharLine(data);
    }
}
