void bad()
{
    wchar_t * data;
    data = NULL; /* Initialize data */
    if(staticFive==5)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            wchar_t dataBuffer[100];
            wmemset(dataBuffer, L'A', 100-1); /* fill with 'A's */
            dataBuffer[100-1] = L'\0'; /* null terminate */
            data = dataBuffer;
        }
    }
    printWLine(data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete [] data;
}
