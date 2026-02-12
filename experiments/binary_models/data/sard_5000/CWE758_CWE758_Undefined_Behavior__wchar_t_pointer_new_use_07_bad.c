void bad()
{
    if(staticFive==5)
    {
        {
            wchar_t * * pointer = new wchar_t *;
            wchar_t * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            delete pointer;
            printWLine(data);
        }
    }
}
