void CWE758_Undefined_Behavior__char_alloca_use_06_bad()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            char * pointer = (char *)ALLOCA(sizeof(char));
            char data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printHexCharLine(data);
        }
    }
}
