void bad()
{
    int * data;
    data = NULL; /* Initialize data */
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            static int dataBuffer;
            dataBuffer = 5;
            data = &dataBuffer;
        }
    }
    printIntLine(*data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
