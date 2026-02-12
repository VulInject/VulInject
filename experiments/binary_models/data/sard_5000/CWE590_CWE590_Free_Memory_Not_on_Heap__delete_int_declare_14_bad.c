void bad()
{
    int * data;
    data = NULL; /* Initialize data */
    if(globalFive==5)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            int dataBuffer;
            dataBuffer = 5;
            data = &dataBuffer;
        }
    }
    printIntLine(*data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
