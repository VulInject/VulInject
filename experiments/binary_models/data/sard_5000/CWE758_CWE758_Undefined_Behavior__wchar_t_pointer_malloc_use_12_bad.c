void CWE758_Undefined_Behavior__wchar_t_pointer_malloc_use_12_bad()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            wchar_t * * pointer = (wchar_t * *)malloc(sizeof(wchar_t *));
            if (pointer == NULL) {exit(-1);}
            wchar_t * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            free(pointer);
            printWLine(data);
        }
    }
    else
    {
        {
            wchar_t * data;
            wchar_t * * pointer = (wchar_t * *)malloc(sizeof(wchar_t *));
            if (pointer == NULL) {exit(-1);}
            data = L"string";
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                wchar_t * data = *pointer;
                printWLine(data);
            }
            free(pointer);
        }
    }
}
