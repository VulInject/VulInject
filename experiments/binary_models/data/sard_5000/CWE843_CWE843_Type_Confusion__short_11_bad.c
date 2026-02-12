void CWE843_Type_Confusion__short_11_bad()
{
    void * data;
    /* Initialize data */
    data = NULL;
    if(globalReturnsTrue())
    {
        {
            /* FLAW: Point data to a short */
            short shortBuffer = 8;
            data = &shortBuffer;
        }
    }
    /* POTENTIAL FLAW: Attempt to access data as an int */
    printIntLine(*((int*)data));
}
