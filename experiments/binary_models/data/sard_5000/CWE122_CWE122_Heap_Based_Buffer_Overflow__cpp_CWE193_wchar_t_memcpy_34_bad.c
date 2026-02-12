void bad()
{
    wchar_t * data;
    unionType myUnion;
    data = NULL;
    /* FLAW: Did not leave space for a null terminator */
    data = new wchar_t[10];
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t source[10+1] = SRC_STRING;
            /* Copy length + 1 to include NUL terminator from source */
            /* POTENTIAL FLAW: data may not have enough space to hold source */
            memcpy(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
            printWLine(data);
            delete [] data;
        }
    }
}
