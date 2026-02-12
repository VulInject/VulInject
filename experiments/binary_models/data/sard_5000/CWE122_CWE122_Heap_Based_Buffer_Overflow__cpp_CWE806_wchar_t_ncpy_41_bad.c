void bad()
{
    wchar_t * data;
    data = new wchar_t[100];
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    wmemset(data, L'A', 100-1); /* fill with L'A's */
    data[100-1] = L'\0'; /* null terminate */
    badSink(data);
}
