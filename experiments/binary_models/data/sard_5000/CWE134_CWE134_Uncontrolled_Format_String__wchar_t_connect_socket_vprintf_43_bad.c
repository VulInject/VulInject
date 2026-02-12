void bad()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    badSource(data);
    badVaSink(data, data);
}
