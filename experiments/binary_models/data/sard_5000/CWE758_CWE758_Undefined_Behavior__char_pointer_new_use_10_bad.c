void bad()
{
    if(globalTrue)
    {
        {
            char * * pointer = new char *;
            char * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            delete pointer;
            printLine(data);
        }
    }
}
