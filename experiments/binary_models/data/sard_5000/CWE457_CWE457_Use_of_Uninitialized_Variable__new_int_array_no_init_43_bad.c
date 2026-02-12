void bad()
{
    int * data;
    data = new int[10];
    badSource(data);
    /* POTENTIAL FLAW: Use data without initializing it */
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i]);
        }
    }
    /* deallocate the memory */
    delete [] data;
}
