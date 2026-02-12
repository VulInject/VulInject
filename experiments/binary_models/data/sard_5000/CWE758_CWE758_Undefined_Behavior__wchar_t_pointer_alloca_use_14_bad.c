void CWE758_Undefined_Behavior__wchar_t_pointer_alloca_use_14_bad()
{
    if(globalFive==5)
    {
        {
            wchar_t * * pointer = (wchar_t * *)ALLOCA(sizeof(wchar_t *));
            wchar_t * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printWLine(data);
        }
    }
}
