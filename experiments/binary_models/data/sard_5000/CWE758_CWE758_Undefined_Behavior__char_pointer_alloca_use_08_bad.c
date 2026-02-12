void CWE758_Undefined_Behavior__char_pointer_alloca_use_08_bad()
{
    if(staticReturnsTrue())
    {
        {
            char * * pointer = (char * *)ALLOCA(sizeof(char *));
            char * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printLine(data);
        }
    }
}
