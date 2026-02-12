void CWE843_Type_Confusion__short_03_bad()
{
    void * data;
    /* Initialize data */
    data = NULL;
    if(5==5)
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
