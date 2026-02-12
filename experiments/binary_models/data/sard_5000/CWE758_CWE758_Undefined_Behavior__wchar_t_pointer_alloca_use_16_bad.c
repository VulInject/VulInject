void CWE758_Undefined_Behavior__wchar_t_pointer_alloca_use_16_bad()
{
    while(1)
    {
        {
            wchar_t * * pointer = (wchar_t * *)ALLOCA(sizeof(wchar_t *));
            wchar_t * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printWLine(data);
        }
        break;
    }
}
