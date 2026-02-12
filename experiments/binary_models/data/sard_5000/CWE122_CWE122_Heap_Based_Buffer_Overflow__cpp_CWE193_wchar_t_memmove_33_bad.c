void bad()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    /* FLAW: Did not leave space for a null terminator */
    data = new wchar_t[10];
    {
        wchar_t * data = dataRef;
        {
            wchar_t source[10+1] = SRC_STRING;
            /* Copy length + 1 to include NUL terminator from source */
            /* POTENTIAL FLAW: data may not have enough space to hold source */
            memmove(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
            printWLine(data);
            delete [] data;
        }
    }
}
