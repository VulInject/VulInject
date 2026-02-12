void CWE843_Type_Confusion__char_03_bad()
{
    void * data;
    /* Initialize data */
    data = NULL;
    if(5==5)
    {
        {
            /* FLAW: Point data to a char */
            char charBuffer = 'a';
            data = &charBuffer;
        }
    }
    /* POTENTIAL FLAW: Attempt to access data as an int */
    printIntLine(*((int*)data));
}
